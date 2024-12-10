#include<stdio.h>
#include<stdlib.h>

void Diff(int Arr[],int iLength)
{
    int iCnt=0,iDigit=0,iCount=0;
    int *Brr=0;
    int iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=0;
        while(Arr[iCnt]!=0)
        {
            iDigit=Arr[iCnt]%10;
            iSum=iDigit+iSum;
            Arr[iCnt]=Arr[iCnt]/10;
        }
        printf("%d\t",iSum);
        
        
    }
}

int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int *p=NULL;

    printf("Enter Number of Element\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }
    printf("%d Element",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Diff(p,iSize);


    free(p);

    return 0;
}