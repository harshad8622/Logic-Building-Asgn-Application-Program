#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
   
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        
        printf("%d\t",iCnt*iNo);
        
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}