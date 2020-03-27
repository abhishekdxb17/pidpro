#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

#define Max_Pid 1000
#define Min_Pid 100


int array[Max_Pid-Min_Pid]={0};
//function to release pid from the program

void release(int iden){
    array[iden]=0;
}
//------------------------------------------------------------------------------------------------------------------
//Thread function
void *Process(void *a){
   
     
      int id1_t =  *(( int*)a);
       int iden = Allocate_Pid();
      
       if(1!=0){
       printf("Process Id is [%d] and the thread Id is [%d]\n",iden+Min_Pid,id1_t ,1);
        sleep(1);

        printf("Process Id is [%d] and the thread Id is [%d] and freed after %d seconds\n",iden+Min_Pid,id1_t ,1);
        release(iden);
    }
    else
    {
      printf("******error there is no pid available  error*******");
    }
    pthread_exit(NULL);
}
//------------------------------------------------------------------------------------------------------------------
//function to allocate the process
int Allocate_Pid(void){
    int start,f=1;
    for(start=0; start<Max_Pid-Min_Pid; start++){
        if(array[start]==0)
         {
            array[start]=1;
            f=0;
            break;
        }
    }
    return f?-1:start;
   
}
//------------------------------------------------------------------------------------------------------------------
int main(){
    int obj;
    
    int cipher;
    
printf("welcome to my project question -7\n");
printf("name:abhishek chhabra\n");
printf("roll_no=21\n");
printf("red_no=11800211\n");
printf("************************************************************\n");


printf("enter  the number of threads \n");
scanf("%d",&cipher);
printf("Thank u for entering the number of threads\n");

    pthread_t pcs[cipher];
    for(obj=0; obj<cipher; obj++){
        if(pthread_create(&pcs[obj],NULL,Process,(void*)&obj))
          return -1; }

    for(obj=0; obj<cipher; obj++){
    	 pthread_join(pcs[obj],NULL);
    	 
    	 }
       
}
