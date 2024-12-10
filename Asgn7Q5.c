#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=1,iDiffFact=0,iEvenFact=1,iOddFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            iEvenFact=iEvenFact*iCnt;
        }
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2!=0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
        iDiffFact=iEvenFact-iOddFact;
        return iDiffFact;
    
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}