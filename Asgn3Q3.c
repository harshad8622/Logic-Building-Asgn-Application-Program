#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt==0)&&(iNo%2==0))
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}