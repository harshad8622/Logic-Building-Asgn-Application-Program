#include<stdio.h>
double FToCelcius(float fTemp)
{
    double dCelcius=0;
    dCelcius=((fTemp-32)*(5/9));
    
    return dCelcius;

}
int main()
{
    float fValue=0;
    double dRet=0;

    printf("Enter Temp in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet=FToCelcius(fValue);

    printf("Temp in Celcius is:%lf\n",dRet);

    return 0;
}