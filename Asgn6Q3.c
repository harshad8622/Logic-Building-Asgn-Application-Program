#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0,iFact=1;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        iFact=iCnt*iFact;
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is:%d",iRet);
    return 0;
}