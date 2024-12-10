#include<stdio.h>
#include<stdlib.h>

int FirstOccur(int Arr[],int iNo,int iLenght)
{
    int iCnt=0,iResult=0;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iResult=iCnt;   
            break;
        }
        
    }
    return iResult;
    
}
int main()
{
    int iSize=0,iValue=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enter Nummber of Elelment:\n");
    scanf("%d",&iSize);

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter %d Number:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=FirstOccur(p,iValue,iSize);
    if(iRet==-1)
    {
        printf("There is no such Number");
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
    free(p);
    return 0;

}