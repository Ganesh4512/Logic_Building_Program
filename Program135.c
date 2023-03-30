#include<stdio.h>

int strlenX(char *str)
{
    int iCnt =0, i = 0;
    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];       //static memory allocation
    int iRet = 0;

    printf("plz enter String :");
    scanf("%[^'\n']s",Arr);         //string value ghene

    iRet = strlenX(Arr);
    printf("Number of character are %d\n",iRet);

   
   
    return 0;
}