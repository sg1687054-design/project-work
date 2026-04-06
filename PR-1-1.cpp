#include<stdio.h>

int main()
{
	int celsius, fahrenhit;
	
	printf("enter value of celsius");
	scanf("%d",&celsius);
	
	fahrenhit = ( 9/5 ) * celsius + 32;
	
	printf("fahrenhit = %d\n", fahrenhit);
}
/*
Output:
Enter value of celsius: 0
fahrenhit: 32
*/
