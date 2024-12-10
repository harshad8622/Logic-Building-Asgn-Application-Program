#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt=0,iCountEven=0,iCountOdd=0,iCountDiff=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
         if(Arr[iCnt]%2==0)
        {
            iCountEven++;
        }
    
         if(Arr[iCnt]%2!=0)
        {
            iCountOdd++;
        }
    }
    

    iCountDiff=iCountEven-iCountOdd;
    return iCountDiff;
   
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

    iRet=CountEven(p,iSize);

    printf("%d\n",iRet);

    free(p);

    return 0;
}

