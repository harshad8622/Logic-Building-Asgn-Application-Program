#include<stdio.h>

int Display(int iNo,int iFrequency )
{
    int iCnt=0;

    for(iCnt=1;iFrequency>=iCnt;iCnt++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}