#include <stdio.h>

double grades[10];

void updateArray(int i, double g)
{
	grades[i] = g;
}

double calc_avg(int n);

int main()
{
	int i;
	int num_grades;

	printf("How many grades? ");
	scanf("%d", &num_grades);

	for (i = 1; i <= num_grades; i++) {
		printf("Grade %d? ", i);
		scanf("%lf", &grades[i]);
		updateArray(i, grades[i]);
	}

	printf("The avg is %.2lf\n", calc_avg(num_grades));

	return 0;
}
