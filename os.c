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



