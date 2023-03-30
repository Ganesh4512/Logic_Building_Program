#include<stdio.h>
#include<stdbool.h>

bool CheckCapitalX(char ch)
{
    if((ch >= 'A') &&(ch <='Z'))
    {
         return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue= '\0';
    bool bRet=0;

    printf("plz enter one character\n");
    scanf("%c",&cValue);

    bRet = CheckCapitalX(cValue);
    if(bRet == true)
    {
        printf("%c is a small case letter\n",cValue);
    }
    else
    {
         printf("%c is not a small case letter\n",cValue);
    }
    return 0;
}