#include<stdio.h>
main()
{
	 int n,i,a=0,b=1,c;
	printf("enter the number");
	scanf("%d",&n);


	for(i=1;i<=n;i++){
	c=a+b;
		
	a=b;
    b=c;
    printf("%d ",c);
  
}
} 
