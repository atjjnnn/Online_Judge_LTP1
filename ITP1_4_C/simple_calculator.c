#include <stdio.h>

int main(void)
{
	int a, b, out;
	char op;
	
	while(1) {
		scanf("%d %c %d", &a, &op, &b);
		
		if (op == '?') {
			break;
		} else if (op == '+') {
			out = a + b;
		} else if (op == '-') {
			out = a - b;
		} else if (op == '*') {
			out = a * b;
		} else if (op == '/') {
			out = a / b;
		} else {
			break;
		}
		printf("%d\n", out);
	}
	return 0;
}
