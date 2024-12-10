#include<stdio.h>
double SquareToMeter(int iNo)
{
    double dSqMeter=0;
    dSqMeter=iNo*0.0929;
    return dSqMeter;

}
int main()
{
    int iValue=0;
    double dRet=0;

    printf("Enter Area in Sqare:\n");
    scanf("%d",&iValue);

    dRet=SquareToMeter(iValue);

    printf("KM in Meter is:%lf Meter\n",dRet);

    return 0;
}