//one string copped to 2nd string

#include<stdio.h>

void strcpyX(char *src,char *dest)
{   
    while(*src != '\0')
    {
        *dest =*src;

        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);   //strcpy(100,200)

    printf("Copied string is %s\n",Brr);
    return 0;
    
}