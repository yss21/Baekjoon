#include <stdio.h>
#include <stdlib.h>

int main() {
	int T;
	int answer = 0;

	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		char str[101];
		int index = 0;
		int flag = 1;

		scanf_s("%s", str, sizeof(str));
		while (str[index]) {
			index++;
		}

		for (int j = 0; j < index; j++) {
			if (str[j] != str[j + 1]) {
				char* newstr;
				newstr = (char*)malloc(sizeof(char) * (index - j));
				for (int k = j + 1; k < index; k++) {
					newstr[k - j - 1] = str[k];
				}
				for (int k = 0; k < index - j; k++) {
					if (str[j] == newstr[k]) {
						flag = 0;
						break;
					}
				}
			}
			
		}
		if (flag) {
			answer += 1;
		}
	}

	printf("%d", answer);
}