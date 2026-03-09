#include <stdio.h>
#include <stdlib.h>

/* функция проверки простого числа */
int isPrime(int n) {
		int i;

		if (n < 2)
				return 0;

		for (i = 2; i * i <= n; i++) {
				if (n % i == 0)
						return 0;
		}

		return 1;
}

int main(int argc, char *argv[]) {

		int a;
		int i;

		if (argc < 2) {
				printf("Usage: %s number\n", argv[0]);
				return 1;
		}

		a = atoi(argv[1]);

		for (i = 2; i <= a - 2; i++) {
				if (isPrime(i) && isPrime(i + 2)) {
						printf("%d %d\n", i, i + 2);
				}
		}

		return 0;
}