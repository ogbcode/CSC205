#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
char *list[]={"online fraud","chargeback","payment gateway challenges","continuos update","user experience challenges","multi-current payment"};
int op,z,operationlist[6],d=0,g=0;
char threadlist[40],operation;
char* s;
void*func1(void*threadid)
{
    long*id=(long*)threadid;

    printf("%s -" "%ld \n",s,id);
}
int main()
{
    printf("how many operation do you want to monitor:\n");
    scanf("%d",&op);
    printf("what operation do you want to monitor:\n");
    printf("(1)online fraud\n(2)chargeback\n(3)payment gateway challenges\n(4)continuous update\n(5)user experience challenged\n(6)multi-currency payment\n");
    z=2;
    for(int v=0;v<op;v++)
        {
             printf("input the operation:");
             scanf("%d",&operation);
            operationlist[v]=operation;
         }
pthread_t thread1,thread2,thread3,thread4,thread5,thread6,thread7,thread8,thread9,thread10, thread11,thread12;
pthread_t* pthreads[]={&thread1,&thread2,&thread3,&thread4,&thread5,&thread6,&thread7,&thread8,&thread9,&thread10,&thread11,&thread12};
for(int b=0;b<op;b++)
{
    for(int i=0;i<z;i++)
        {
          pthread_create(pthreads[i],NULL,func1,(void*)pthreads[i]);
        }
    z+=2;
    s=list[(operationlist[g])-1];
    g++;
}
pthread_exit(NULL);
return 0;
}