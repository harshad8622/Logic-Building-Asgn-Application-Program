#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=1,iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            iFact=iFact*iCnt;
        }
    }
        return iFact;
    
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial is : %d",iRet);

    return 0;
}