#include <stdio.h>

int main() {
	char str[1000001];
	int max = 0;
	int cnt = 0;
	char answer = '1';
	int arr[26] = { 0, };

	scanf_s("%s", str, sizeof(str));
	for (int i = 0; i < 26; i++) {
		int index = 0;
		char* tmp = str;
		while (*tmp) {
			if (*tmp == 97 + i || *tmp == 65 + i)
				arr[i]++;
			tmp++;
		}
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = 0; i < 26; i++)
		if (max == arr[i]) {
			cnt++;
			answer = 65 + i;
		}
	if (cnt != 1)
		printf("?");
	else
		printf("%c", answer);
}