#include<stdio.h>

int MultOddFactor(int iNo)
{
    int iCnt=0,iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iMult=iCnt*iMult;
        }
    }
    return iMult;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter A Number\n");
    scanf("%d",&iValue);

    iRet=MultOddFactor(iValue);

    printf("Mult of Odd Factor is :%d",iRet);

    return 0;
}