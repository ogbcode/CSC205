#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void*firstthread(void*threadid)
{
    long*id=(long*)threadid;

    printf("%ld \n",id);

    printf("i am happy\n");
    return NULL;
}               
int main()
{
    pthread_t thread_id;
    pthread_create(&thread_id,NULL,firstthread,(void*)&thread_id);
  
      //  printf("thread created succesfully\n");
       // pthread_create(&thread_id,NULL,firstthread,NULL);
        //pthread_join(thread_id,NULL);
       // printf("the thread id is %ls",&thread_id);

    pthread_exit(NULL);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
