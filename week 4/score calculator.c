// Online C++ compiler to run C++ program online
#include <stdio.h>
int CSC201,CSC205,STA205;
int total;
float average;
int main() {
    printf("input your CSC201 score;\n");
    scanf("%d",&CSC201);
        printf("input your CSC205 score;\n");
    scanf("%d",&CSC205);
        printf("input your STA205 score;\n");
    scanf("%d",&STA205);
    total=CSC201+CSC205+STA205;
    printf("your total score is %d \n",total);
    average=total/3;
    printf("your average score is %f",average);
    
}