#include<stdio.h>

int MulFact(int iNo)
{
    int iFact=1;
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MulFact(iValue);

    printf("Multiplication of fact :%d",iRet);

    return 0;

}