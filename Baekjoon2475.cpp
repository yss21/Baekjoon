#include<stdio.h>

int main() {
	int a[5] = { 0, };
	int sum = 0;

	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 5; i++)
		sum += (a[i] * a[i]);

	printf("%d", sum % 10);
}