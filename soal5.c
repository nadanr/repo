#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
 
pthread_t tid1;
pthread_t tid2;
int status;

FILE *in, *inn;
int hitungIfah( *argv ){
    int countIf=0;
    char simpan[1000];
    status = 0;

    in=fopen("Novel.txt", "r");
    
    while(fgets(simpan, 1000, in)!=NULL){
        if(strstr(simpan,"Ifah")){
            countIf++;        
        }
    }
    status = 1;
    printf("Ifah= %d\n", countIf);
}

int hitungFina( *argv ){
    int countFi=0;
    char simpan2[1000];
        
}