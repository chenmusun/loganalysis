#pragma once
#include<map>
#include<vector>
#include<string>
#include<memory>
#include<time.h>
#include<stdlib.h>
#include<set>
//增加日志功能
#define ELPP_THREAD_SAFE
#include"easylogging++.h"
using  std::map;
using  std::string;
using  std::vector;
using  std::shared_ptr;
using std::set;
enum TimeEnum{DAY,HOUR,MIN,SEC};
struct KeywordProc{
	string keyword;
	void (*proc)(const string& ,void *);
	bool operator<(const KeywordProc &kp) const
	{
		return keyword<kp.keyword;
	}
	bool operator==(const KeywordProc &kp) const
	{
		return keyword==kp.keyword;
	}
};
#define DECLARE_DATA_PROC(cmd)   static void Generate##cmd(const string&,void *);
struct LogTime{
	  string year_month_day;//年月日
	  string hour;
	  string minute;
	  string second;
	  int millisecond;
	  unsigned long long timestamp;
};

struct LogGPS{
	  double longitude;//经度
	  double latitude;//纬度
};
class LogAnalysis
{
 public:
 LogAnalysis();
 ~LogAnalysis();
 void AnalyseOneLine(const string& line);
DECLARE_DATA_PROC(IE);
DECLARE_DATA_PROC(Event);
DECLARE_DATA_PROC(IEEvent);
DECLARE_DATA_PROC(TimeStamp);
DECLARE_DATA_PROC(GPS);
DECLARE_DATA_PROC(StartFlag);
private:
static  string SplitFirstString(const string& str_source,char sep);//截取第一个substring
static  void SplitStrings(const string& str_source,char sep,vector<string>& vec);//截取所有substring

//DECLARE_DATA_PROC(StartFlag);
//static  void  GenerateIE(const string& ie_str,map<int,long> & ie_map);//明文IE
//static  void GenerateEvent(const string& event_str,vector<int>& event_vec);//明文事件
//static  void GenerateIEEvent(const string& LBQ_str,map<int,long> & ie_map,vector<int>& event_vec);//密文IE事件
//void GenerateTimeStamp(const string& str_time,TimeEnum te);//生成时间
//void GenerateGPS(const string& str_GPS);//生成经纬度
//void SetAnalysisFlag(const string& str_flag);
private:
//  long long timestamp_;
//  double longitude_;//经度
//  double latitude_;//纬度
  LogGPS gps_;
  LogTime time_;
  bool start_analysis_;//开始分析标识
//  string year_month_day_;//年月日
//  string hour_;
//  string minute_;
//  string second_;
//  int millisecond_;
  static  set<KeywordProc> keyword_proc_set_;
};