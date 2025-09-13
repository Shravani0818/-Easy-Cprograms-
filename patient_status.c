#include<stdio.h>
 int main()
{
 float sensortemp, threshold=80,criticaltemp=100; 
 printf("enter body temperature");
 scanf("%f", &sensortemp);
if (sensortemp<=threshold)
{
printf("patient status: normal ");
}
 else if (sensortemp>threshold && criticaltemp >sensortemp)
{
 printf("patient status: warning");
}
 else
{
 printf("patient status: critical");
}
 return 0;
}
