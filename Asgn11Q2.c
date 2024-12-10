#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit=0;
    bool bFlag=false;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            bFlag=true;
            break;
        }
        iNo=iNo/10;
    }
    return bFlag;
}
int main()
{
    int iValue=0;
    bool iRet=false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=ChkZero(iValue);
    if(iRet==true)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("It not Contain Zero\n");
    }

    return 0;
}