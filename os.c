/*<--Project Operating System-->
<--Question Number 7-->
<--Name->Abhishek Chhabra-->
<--Registration No->11800211-->
<--Abbrevation : cipher:16 means number of processes-->*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


#define most 1000
#define base 100
#define  cipher 16 

int proc[most-base]={0};

//function to release pid from the program

void rel(int iden){
    proc[iden]=0;
}
//------------------------------------------------------------------------------------------------------------------
//Thread function
void *Process(void *a){
   
     
      int id1_t =  *(( int*)a);
       int iden = allocation();//goes to pid function


   
    if(1!=0){
       printf("Process Id is [%d] and the thread Id is [%d]\n",iden+base,id1_t ,1);
        sleep(1);

        printf("Process Id is [%d] and the thread Id is [%d] and freed after %d seconds\n",iden+base,id1_t ,1);
        rel(iden);
    }
    else
    {
      printf("******error there is no pid available  error*******");
    }
    pthread_exit(NULL);
}




