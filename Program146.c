//used fix without flag
#include<stdio.h>
#include<stdbool.h>


bool Check(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag =true;
            break;
        }
        str++; 
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    int iRet =0;
    bool bRet = false;
    char cValue ='\0';


    printf("Plz enter string\n");
    scanf("%[^ '\n']s",Arr);

    printf("Check enter the the character :\n");
    scanf(" %c",&cValue);       //space dily %c agodar for solution
    
    bRet = Check(Arr,cValue);
    if(bRet == true)
    {
        printf("Character is present in the string\n");
    }
    else
    {
         printf("Character is present in the string\n");
    }


    return 0;
}