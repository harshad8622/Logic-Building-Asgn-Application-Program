#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    int iSumEven=0;
    int iSumOdd=0;
    int iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            iSumOdd=iDigit+iSumOdd;
        }
        else if(iDigit%2==0)
        {
            iSumEven=iDigit+iSumEven;
        }
        iNo=iNo/10;
    }
    iDiff=iSumEven-iSumOdd;
    return iDiff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("Difference is :%d\n",iRet);

    return 0;
}