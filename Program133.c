#include<stdio.h>
#include<stdbool.h>





int main()
{
    char Arr[100];

    printf("plz enter ur full name :");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);         //string value ghene

    printf("Ur name is :  %s\n",Arr);
   
    return 0;
}