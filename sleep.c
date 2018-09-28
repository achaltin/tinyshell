#include <unistd.h>
#include <stdlib.h>
#include <string.h>
//default sleep for 5 seconds, if given command arg, sleep for that many seconds
int main(int argc, char **argv){
    int seconds = 5;
    if(argc >= 2 && strcmp(argv[1],"&")!=0){
        seconds = atoi(argv[1]);
    }
    sleep(seconds);
}