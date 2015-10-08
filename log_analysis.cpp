#include "log_analysis.h"
KeywordProc  keyword_proc[]={
		{"DAY",LogAnalysis::GenerateTimeStamp},
		{"HOUR",LogAnalysis::GenerateTimeStamp},
		{"MIN",LogAnalysis::GenerateTimeStamp},
		{"SEC",LogAnalysis::GenerateTimeStamp},
		{"GPS",LogAnalysis::GenerateGPS},
		{"LAB",LogAnalysis::GenerateStartFlag},
		{"LBQ",LogAnalysis::GenerateIEEvent},
		{"APPLAYER",LogAnalysis::GenerateIE},
		{"APPEVENT",LogAnalysis::GenerateEvent},
};

set<KeywordProc> LogAnalysis::keyword_proc_set_(keyword_proc,keyword_proc+sizeof(keyword_proc)/sizeof(KeywordProc));

LogAnalysis::LogAnalysis():start_analysis_(false)
{

}

LogAnalysis::~LogAnalysis()
{

}

void LogAnalysis::AnalyseOneLine(const string& line)
{
	string head=SplitFirstString(line,'\t');
	KeywordProc kp;
	kp.keyword=head;
	auto pos=keyword_proc_set_.find(kp);
	//if((set<KeywordProc>::iterator pos=))
	if(pos!=keyword_proc_set_.end())
	{
//		if(start_analysis_||(pos->keyword=="LAB"))
			pos->proc(line,this);
	}
}

string LogAnalysis::SplitFirstString(const string& str_source,char sep)
{
  size_t pos=str_source.find(sep);
  return (pos==string::npos)?"":str_source.substr(0,pos);
}

void LogAnalysis::SplitStrings(const string& str_source,char sep,vector<string>& vec)
{
  //str_source.pop_back();//删除最后一个字符\n
  size_t begin=0;
  size_t end=str_source.find(sep,begin);
  while(end!=string::npos){
    vec.push_back(str_source.substr(begin,end-begin));
    begin=end+1;
    end=str_source.find(sep,begin);
  }
  vec.push_back(str_source.substr(begin,str_source.length()-begin-1));//去除末尾的\n
}

void LogAnalysis::GenerateTimeStamp(const string& str_time,void * arg/*TimeEnum te*/)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
//	LogTime * time=reinterpret_cast<LogTime *>(output);
  vector<string> time_vec;
  SplitStrings(str_time,'\t',time_vec);
  int vec_size=time_vec.size();
  if(!vec_size)
	  return;

  if((time_vec[0]=="DAY")&&(vec_size>=4))
	  loganalysis->time_.year_month_day=time_vec[1]+"-"+time_vec[2]+"-"+time_vec[3];
  else if((time_vec[0]=="HOUR")&&(vec_size>=2))
	  loganalysis->time_.hour=time_vec[1];
  else if((time_vec[0]=="MIN")&&(vec_size>=2))
	  loganalysis->time_.minute=time_vec[1];
  else if((time_vec[0]=="SEC")&&(vec_size>=2)){
	  loganalysis->time_.second=time_vec[1];
	  loganalysis->time_.millisecond=atoi(time_vec[2].c_str());
	  //生成时间
	  char fmt[] = "%Y-%m-%d-%H:%M:%S";
	  string timestr=loganalysis->time_.year_month_day+"-"+loganalysis->time_.hour+":"+loganalysis->time_.minute+":"+loganalysis->time_.second;
	  // char buf[] = "2000-01-01-00:00:00";
	  LOG(INFO)<<"Time now : "<<timestr<<" "<<time_vec[2]<<std::endl;
	  struct tm t;
	  strptime(timestr.c_str(),fmt,&t);
	  time_t sec;
	  if((sec=mktime(&t))!=-1){
		  loganalysis->time_.timestamp=sec*1000+loganalysis->time_.millisecond;
	  }

  }
  else{

  }

}

void LogAnalysis::GenerateGPS(const string& str_GPS,void *arg)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
//	LogGPS * gps=reinterpret_cast<LogGPS *>(output);
  vector<string> gps_vec;
  SplitStrings(str_GPS,'\t',gps_vec);
  int vec_size=gps_vec.size();
  if(vec_size>=3){
	  loganalysis->gps_.longitude=atof(gps_vec[1].c_str());
	  loganalysis->gps_.latitude=atof(gps_vec[2].c_str());
	  LOG(INFO)<<"GPS now : "<<loganalysis->gps_.longitude<<"	"<<loganalysis->gps_.latitude<<std::endl;
  }
}

void LogAnalysis::GenerateStartFlag(const string& str_flag,void * arg)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
	//bool *start_analysis=reinterpret_cast<bool *>(output);
  vector<string> flag_vec;
  SplitStrings(str_flag,'\t',flag_vec);
  int vec_size=flag_vec.size();
  if(vec_size>=3){
    if(flag_vec[2]=="Application_Test_Begin"){
    	loganalysis->start_analysis_=true;
    }
    else if(flag_vec[2]=="Application_Test_End"){
    	loganalysis->start_analysis_=false;
    }
    else{
    }
  }
  LOG(INFO)<<"Start Flag now : "<<loganalysis->start_analysis_<<std::endl;
}


void LogAnalysis::GenerateIE(const string& ie,void * arg)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
	if(!loganalysis->start_analysis_)
		return;
}

void LogAnalysis::GenerateEvent(const string& event,void * arg)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
	if(!loganalysis->start_analysis_)
		return;
}

void LogAnalysis::GenerateIEEvent(const string& ie_event,void *arg)
{
	LogAnalysis * loganalysis=reinterpret_cast<LogAnalysis *>(arg);
	if(!loganalysis->start_analysis_)
		return;
}
