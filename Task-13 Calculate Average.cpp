#include<stdio.h>
int main(){
float num1,num2,num3,num4,num5,sum,average;
printf("Enter five numbers:\n");
scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
sum=num1+num2+num3+num4+num5;
average=sum/5;
printf("The average is:%.2f\n",average);
return 0;
}
