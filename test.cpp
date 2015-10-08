#include <iostream>
#include <string>
#include<stdio.h>
#include"log_analysis.h"

INITIALIZE_EASYLOGGINGPP
int main ()
{
	el::Configurations conf("./log.conf");
	el::Loggers::reconfigureLogger("default", conf);
	FILE * file=fopen("./0857140120150529143207MS8.lte","r");
	LogAnalysis logana;
	char line[1024]={0};
	while(fgets(line,1024,file)!=NULL){
		logana.AnalyseOneLine(line);
	}

  return 0;
}
