#include <stdio.h>

int main()
{
	int m1, m2, m3, m4, m5, m6;
	float total, percentage;

	printf("Enter marks for subject 1: ");
	scanf("%d", &m1);

	printf("Enter marks for subject 2: ");
	scanf("%d", &m2);

	printf("Enter marks for subject 3: ");
	scanf("%d", &m3);

	printf("Enter marks for subject 4: ");
	scanf("%d", &m4);

	printf("Enter marks for subject 5: ");
	scanf("%d", &m5);

	printf("Enter marks for subject 6: ");
	scanf("%d", &m6);

	total = m1 + m2 + m3 + m4 + m5 + m6;
	percentage = total / 6;

	printf("\nTotal Marks = %.2f", total);
	printf("\nPercentage = %.2f%%\n", percentage);

	if (percentage >= 90) {
		printf("Grade: Excellent\n");
	}
	else if (percentage >= 75 && percentage < 90) {
		printf("Grade: Very Good\n");
	}
	else if (percentage >= 50 && percentage < 75) {
		printf("Grade: Good\n");
	}
	else if (percentage >= 40 && percentage < 50) {
		printf("Grade: Average\n");
	}
	else {
		printf("Grade: Fail\n");
	}

	return 0;
}
