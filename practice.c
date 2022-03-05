#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int ogb[2][3][2]={{{1,2},{3,4},{7,8}},{1,2},{1,1},{2,4}

};
for (int i=0;i<2;i++)
{
    for(int f=0;f<3;f++)
    {
        for(int z=0;z<2;z++)
        {
            printf("element at x[%d],[%d],[%d] =%d\n",i,f,z,ogb[i][f][z]);
        }
    }
}
}