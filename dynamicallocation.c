#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n=6 ;
    ptr=(int*)malloc(n*sizeof(int));

    for(int a=0;a<6;a++)
    {
        printf("input the matrix\n");
        scanf("%d",&ptr[0][0][a]);
        
    }
    for(int z=0;z<6;z++)
    {
        
        //printf("%d",ptr[0][0][1]);
    }
    
    return 0;
}
