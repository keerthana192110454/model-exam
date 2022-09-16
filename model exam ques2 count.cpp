#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int upper=0,lower=0,special=0,digits,cont=1;
	 char ch[100];
    
	printf("Enter the String:\n");
    gets(ch);

    for(i=0; ch[i]!=0; i++)
{

if(ch[i]>='A' && ch[i]<='Z')
{
    upper++;
}
else if (ch[i] >= '0' && ch[i] <= '9')
  		{
  			digits++;  	
  		}    
else if(ch[i]>='a' && ch[i]<='z')
{
    lower++;
}
else
{
	special++;
}
}
  printf("lowercase letters: %d",lower);
  printf("\nuppercase letters: %d",upper);
  printf("\n special characters: %d",special);
  printf("\n digits: %d",digits);
}

