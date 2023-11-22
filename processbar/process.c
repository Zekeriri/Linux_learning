#include "process.h"
#define SIZE 101
#define MAX_RATE 100
#define STYLE '#'
#define STIME 1000*20

const char *str="|/-\\";

void process_v1()
{
    // version 1
    int rate=0;
    char bar[SIZE]={0};
    int num=strlen(str);
    while(rate <=MAX_RATE)
    {
        printf("[%-100s][%d%%][%c]\r",bar,rate,str[rate%num]);
        fflush(stdout);
        usleep(STIME);
        bar[rate++]=STYLE;
    }
    printf("\n");
}

void process_v2(int rate)
{
    // version 2 
    static char bar[SIZE]={0};
    int num=strlen(str);
    if(rate <=MAX_RATE&&rate>=0)
    {
        printf("[%-100s][%d%%][%c]\r",bar,rate,str[rate%num]);
        fflush(stdout);
        bar[rate]=STYLE;
    }
}
