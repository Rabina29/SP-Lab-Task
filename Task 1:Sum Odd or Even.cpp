#include<stdio.h>
int main(){
int n1,n2,sum;

printf("Enter the first number:");
scanf("%d",&n1);
printf("Enter the second number:");
scanf("%d",&n2);
sum=n1+n2;
if(sum%2==0){
printf("The sum is even\n");
}
else
{
    printf("The sum is odd\n");
}
return 0;
}
