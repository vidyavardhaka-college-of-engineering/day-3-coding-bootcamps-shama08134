//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n,i,j;
    printf("The value of n\n");

  	scanf("%d", &n);

  	//Write your code here
  	for(i=0;i<=5;i++)
    {
      for(j=0;j<=i;j++)
      {
    printf("* ");
    }
    printf("\n");
    }


  	return 0;
}
