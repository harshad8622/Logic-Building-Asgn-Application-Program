#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt=0,iSumEven=0,iSumodd=0,iDiff=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumEven=iSumEven+Arr[iCnt];
        }
        else if(Arr[iCnt]%2!=0)
        {
            iSumodd=iSumodd+Arr[iCnt];
        }
    }
    iDiff=iSumEven-iSumodd;

    return iDiff;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Ente Number of Element\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Allocate memory\n");
        return -1;
    }

    printf("Enter %d Element: \n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
