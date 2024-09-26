#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the length of side a:");
scanf("%d",&a);
printf("Enter the length of side b :");
scanf("%d",&b);
printf("Enter the length of side c:" );
scanf("%d",&c);
if((a+b>c)&&(b+c>a)&&(c+a>b)){
 printf("The triangle is valid\n");
}


 else {
  printf("The triangle is not valid\n");
 }
return 0;
}



