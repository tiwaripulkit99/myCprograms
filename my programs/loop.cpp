#include<stdio.h>
main()
{int i,j;

         for(i=1;i<=3;i++)
           {

                for (j=1;j<=5;j++)
				 {
				 if (j>=4-i && j<=2+i)
                  printf("*");
				
				else
                      printf(" ");}
 printf("\n");}
}
