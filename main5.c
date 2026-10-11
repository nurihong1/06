#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return(f);
}



int combination(int n, int r)
{
	return (factorial(n)/factorial(n-r)/factorial(r));
}



int get_integer()
{
	int n;
	printf("Enter the value: ");
	scanf("%i", &n);
	return (n);
}

int main(void) 
{
	int z,x,n,r,result;
	
	z= get_integer();
	x= get_integer();
	result=combination(z,x);
	printf("The result of C(%i,%i) is %i", z,x,result);
	
	
	
	return 0;
}