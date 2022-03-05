#include <stdio.h>
int age;
int main() {
    printf("how old are you:\n");
    scanf("%d",&age);
if (age>18)
{
    printf("you can vote\n");
}else{
    printf("you cannot vote");
}
}