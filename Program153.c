//togglestring coverted

#include<stdio.h>

void strUwrx(char *str)
{
    while(*str !='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str-32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str+32;
        }
        
        str++;  
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    strUwrx(Arr);
    printf("String after is conversion is : %s\n",Arr);




    return 0;
}