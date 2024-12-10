#include<stdio.h>

int MultEvenFactor(int iNo)
{
    int iCnt=0,iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
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

    iRet=MultEvenFactor(iValue);

    printf("Mult of Even Factor is :%d",iRet);

    return 0;
}