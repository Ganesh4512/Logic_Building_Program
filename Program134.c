#include<stdio.h>

int strlenX(char *str)
{
    int iCnt =0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];       //static memory allocation
    int iRet = 0;

    printf("plz enter String :");
    scanf("%[^'\n']s",Arr);         //string value ghene

    iRet = strlenX(Arr);       //strlenX(100)
    printf("Number of character are %d\n",iRet);

   
   
    return 0;
}