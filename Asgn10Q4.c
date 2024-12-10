#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0,iSum=0;
    if((iStart>iEnd)||(iStart<0 || iEnd<0))
    {
        printf("invalid Renge\n");
    }
    
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {    
            iSum=iCnt+iSum;
        }
    }
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter Starting point\n ");
    scanf("%d",&iValue1);

    printf("Enter Endding point\n ");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);
    printf("Addition of Even no is :%d\n",iRet);

    return 0;
}
