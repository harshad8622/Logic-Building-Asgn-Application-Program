#include<stdio.h>

void MultipleDisplay(int iNo)
{ 
    int iCnt=0;
    int iMult=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        iMult=iCnt*iNo;
        printf("%d\t",iMult);
    }

    
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}