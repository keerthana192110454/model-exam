#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
 float income,tax;
 int i=1;
 while(i=1)
 {
 printf("enter the income :");
 scanf("%f",&income);
 if(income>0)
 {
 	if(income<=150000)
 {
  tax=0;
  printf("tax = %f",tax);
 }
 else if(income>150000 && income<=300000)
 {
  tax=(income*0.1);
  printf("tax = %f",tax);
 }
 else if(income>300000 && income<=500000)
 {
  tax=(income*0.2);
  printf("tax = %f",tax);
 }
 else if(income>500000)
 {
  tax=(income*0.3);
  printf("tax = %f",tax);
 }
}
 else
 {
 	printf("invalid");
 }
 printf("\n want to continue?(1/0):");
 scanf("%d",&i);
}

}

