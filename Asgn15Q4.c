#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLenght,int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt]>iStart&&Arr[iCnt]<iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0,iValue1=0,iValue2=0,iCnt=0;
    int *p=NULL;

    printf("Enter Number of Elments :\n");
    scanf("%d",&iSize);

    printf("Enter Start Point\n");
    scanf("%d",&iValue1);

    printf("Enter End Point\n");
    scanf("%d",&iValue2);

    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Number %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Range(p,iSize,iValue1,iValue2);

    return 0;
}