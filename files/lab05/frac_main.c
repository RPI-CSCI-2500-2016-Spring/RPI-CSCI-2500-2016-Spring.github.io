#include <stdio.h>

int gcd(int a, int b);

int lcm(int d1, int d2);

int main()
{
	int n1, n2, d1, d2;

	printf("Please enter N1: ");
	scanf("%d", &n1);
	printf("Please enter D1: ");
	scanf("%d", &d1);

	printf("Please enter N2: ");
	scanf("%d", &n2);
	printf("Please enter D2: ");
	scanf("%d", &d2);

	printf("LCM is %d\n", lcm(d1, d2));

	return 0;
}
