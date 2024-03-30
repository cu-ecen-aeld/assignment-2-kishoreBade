#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[]){

    FILE* fp;

    /*Opening syslog connection*/
    openlog("Assignment2", LOG_PID, LOG_USER);

    /*Checking if 2 arugments are passed or not*/
    if(argc-1 != 2U){
        syslog(LOG_ERR, "Arguments are not proper!");
        exit(1);
    }
    /*opening a file*/
    fp = fopen(argv[1], "w");
    if (fp == NULL) {
        syslog (LOG_ERR, "File is not opened/created");
        exit(1);
    }
    else{
        syslog (LOG_INFO, "File opened/created successfully!");
    }

    int flag = fputs(argv[2], fp);
    if (flag){
        syslog(LOG_DEBUG, "Writing %s to %s ", argv[2], argv[1]);
    }else {
        syslog (LOG_ERR, "Writing %s to %s failed", argv[2], argv[1]);
    }

    fclose(fp);
    closelog();

    return 0;


}