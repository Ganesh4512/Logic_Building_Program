//one string 

#include<stdio.h>

void strcpyTogX(char *src,char *dest)
{   
    while(*src != '\0')
    {   
        if((*src >= 'A')&&( *src <= 'Z'))
        {
            *dest =*src +32;
        }
        else if((*src >= 'a')&&( *src <= 'z'))
        {
            *dest =*src +32;
        }
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

    strcpyTogX(Arr,Brr);   //strcpy(100,200)

    printf("Copied string is %s\n",Brr);
    printf("Original string is %s\n",Arr);
    return 0;
    
}