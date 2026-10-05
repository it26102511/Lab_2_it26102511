#include <stdio.h>
int main(void)
{ 
	float p1,p2,p3;
	printf("Enter the first person's height");
	scanf("%f", &p1);
        printf("Enter the second person's height");
        scanf("%f", &p2);
	printf("Enter the third person's height");
	scanf("%f", &p3);

	float avg;
	avg = (p1+p2+p3)/3;
	printf("Average %.2f\n", avg);
	
	float total_height,missing_height;
	total_height = avg*5;

	missing_height = (total_height-(p1+p2+p3))/2;
	printf("Missing height of a person 4: %.2f\n", missing_height);
	printf("Missing height of a person 5: %.2f\n", missing_height);
        
	return 0;
}


