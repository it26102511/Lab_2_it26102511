#include <stdio.h>
int main (void)
{
	float peri, length, width;

	printf("Enter the perimeter of the fence:");
	scanf("%f", &peri);

	length = (peri/3.5);
	width = (3.0/4.0)* length;

	printf("Length of the fence = %.2f\n", length);
	printf("Width if the fence = %2f\n", width);

	return 0;
}
