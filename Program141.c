#include<stdio.h>


int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >='A') &&(*str <='Z'))
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

    iRet =CountCapital(Arr);

    printf("Count is Capital letter a is : %d\n",iRet);


    return 0;
}