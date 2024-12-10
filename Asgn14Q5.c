#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
        {
            if(Arr[iCnt]==iNo)
            {
                iCount++;
            }
        }
    return iCount;
   
}

int main()
{
    int iSize=0,iCnt=0,iNo=0;
    int bRet=0;
    int *p=NULL;

    printf("Ente Number of Element\n");
    scanf("%d",&iSize);

    printf("Ente Number\n");
    scanf("%d",&iNo);

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

    bRet=Frequency(p,iSize,iNo);

    printf("Frequency is:%d\n",bRet);

    free(p);

    return 0;
}

