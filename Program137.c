#include<stdio.h>

int strlenX(char str[])
{
    int iCnt =0, i = 0;
    for(i =0; str[i] !='\0'; i++)       //using for loop
    {
        iCnt++;
    }

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("plz enter String :");
    scanf("%[^'\n']s",Arr);        

    iRet = strlenX(Arr);
    printf("Number of character are %d\n",iRet);

   
   
    return 0;
}