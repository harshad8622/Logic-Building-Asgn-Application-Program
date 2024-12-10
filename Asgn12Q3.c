#include<stdio.h>

int CountRenge(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>3&&iDigit<7)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountRenge(iValue);
    printf("Count of Renge is :%d\n",iRet);

    return 0;
}