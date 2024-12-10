#include<stdio.h>

int DollerToINR(int iNo)
{
    iNo=iNo*70;
    return iNo;
    
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}