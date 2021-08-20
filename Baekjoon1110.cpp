#include <stdio.h>

int main() {
	int N, answer = 0;
	scanf("%d", &N);
	int first = N;
	while (1) {
		int a = N % 10;
		int b = (N % 10) + ((N / 10) % 10);
		int c = (a * 10) + (b % 10);
		answer++;
		if (first == c) {
			printf("%d", answer);
			break;
		}
		else
			N = c;
	}
}