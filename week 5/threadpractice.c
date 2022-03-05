#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
void* func1(void*threadid)
{
    long*id=(long*)threadid;
    printf("the thread id  is %ld\n",id);
}
int main()
{
    int a;
    char b;
    printf("what is your name:\n ");
    scanf("%s",&b);
    printf("what is your matric number:\n");
    scanf("%d",&a);
    pthread_t name,matricno;
    pthread_create(&name,NULL,func1,(void*)&name);
    pthread_create(&matricno,NULL,func1,(void*)&matricno);
    pthread_exit(NULL);
}