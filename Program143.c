#include<stdio.h>


int CountFrequency(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}



int main()
{
    char Arr[20];
    int iRet =0;
    char cValue ='\0';


    printf("Plz enter string\n");
    scanf("%[^ '\n']s",Arr);

    printf("Check enter the the character :\n");
    scanf("%c",&cValue);
    iRet =CountFrequency(Arr,cValue);

    printf("Frequecncy of letter a is : %d\n",iRet);


    return 0;
}