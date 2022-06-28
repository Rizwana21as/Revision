//Description: Write a C program to swap two numbers using pointers.

#include<stdio.h>
void swap(int *x,int *y)
{
    /**x=(*x)+(*y);
	*y=(*x)-(*y);
	*x=(*x)-(*y);*/
	*x=(*x)^(*y);
	*y=(*x)^(*y);
	*x=(*x)^(*y);
}
int main()
{
	int num1,num2;
	printf("Enter value of num1: ");
	scanf("%d",&num1);
	printf("Enter value of num2: ");
	scanf("%d",&num2);
	printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
	return 0;
}

