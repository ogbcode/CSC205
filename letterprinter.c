#include<stdio.h>
char letters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
char letter;
char holder;
int x=0;
int a;
int main(){
    printf("input a letter from A to J;\n");
    scanf("%c",&letter);
    for (int a=0;a<10;a++)
    {
        if (letter==letters[x])
        {
            holder=letters[x];
        }
        else{
            x++;
        }
    }
    a=x+1;
    for(int b=0;b<6;b++)

    {
        printf("%c",letters[a]);
        a++;
    }
}
    
