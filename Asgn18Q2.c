#include<stdio.h>

int DollarTOINR(int iNo)
{
    int iINR=0;
    iINR=iNo*70;

    return iINR;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number int USD\n");
    scanf("%d",&iValue);

    iRet=DollarTOINR(iValue);

    printf("Indian Rupees is :%d",iRet);

    return 0;

}