#include<stdio.h>

int MultOddFactor(int iNo)
{
    int iCnt=0,iMultO=1,iMultE=1,iMult=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iMultO=iCnt*iMultO;
        }
        if(iCnt%2==0)
        {
            iMultE=iCnt*iMultE;
        }
    }
    iMult=iMultE-iMultO;

    return iMult;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter A Number\n");
    scanf("%d",&iValue);

    iRet=MultOddFactor(iValue);

    printf("Mult of Odd and Even Factor Diff is :%d",iRet);

    return 0;
}