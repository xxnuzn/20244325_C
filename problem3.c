/*
 * 문제 3: 문제 2의 프로그램을 for, do-while문을 이용하여 작성하시오.
 */

#include <stdio.h>
int main(void)
{
    int i;
    int n;
    int sum = 0;

    scanf("%d", &n);

    /* --- for 문 버전 --- */
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            sum += i;
    }
    printf("for 결과: %d\n", sum);

    /* --- do-while 문 버전 --- */
    sum = 0;
    i = 1;
    do {
        if (i % 2 != 0)
            sum += i;
        i++;
    } while (i <= n);
    printf("do-while 결과: %d\n", sum);

    return 0;
}
