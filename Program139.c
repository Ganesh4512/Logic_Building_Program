#include<stdio.h>


int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))  // insesitive
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}



int main()
{
    char Arr[10];
    int iRet =0;

    printf("Plz enter string\n");
    scanf("%[^ '\n']s",Arr);

    iRet =Count(Arr);

    printf("Frequency of a is : %d\n",iRet);


    return 0;
}