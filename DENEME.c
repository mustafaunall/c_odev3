#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void saatGoster()
{
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    char * gun = time_str[2];
    printf("Zaman : %c\n", gun);
}
void format_time(){
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    printf("[%d %d %d %d:%d:%d]",timeinfo->tm_mday, timeinfo->tm_mon + 1, timeinfo->tm_year + 1900, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
}
int main(){
	system("CLS");
	format_time();
}
