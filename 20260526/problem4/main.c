#include <stdio.h>

int max(int a, int b);

int main(void)
{
	int x, y, result;

	printf("정수 두개 입력: ");
	scanf("%d %d", &x, &y);

	result = max(x, y);

	printf("큰값: %d\n", result);

	return 0;
}

int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}
