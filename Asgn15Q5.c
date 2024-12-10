#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLenght)
{
    int iCnt=0,iProduct=1;
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            if(Arr[iCnt>0])
            {
                iProduct=Arr[iCnt]*iProduct;
            }
        }
        else
        {
            iProduct=0;
        }
    }
    return iProduct;
}
int main()
{
    int iSize=0,iValue1=0,iValue2=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enter Number of Elments :\n");
    scanf("%d",&iSize);

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
    iRet=Product(p,iSize);
    printf("Product Of All Even No is :%d",iRet);
    free(p);

    return 0;
}