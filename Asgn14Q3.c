#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
   
}
int main()
{
    int iSize=0,iCnt=0;
    bool bRet=false;
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

    bRet=Check(p,iSize);

    if(bRet==true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(p);

    return 0;
}

