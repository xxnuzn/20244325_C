/*
 * 문제 8: 문제 6번과 7을 참고하여 구구단 단수(2~9)를 입력하면
 *         해당 구구단 결과를 출력하는 프로그램을 중첩 while, for문으로 작성하시오.
 *
 * [실행 예시]
 * Enter your dan : 5
 * 5 * 1 = 5
 * 5 * 2 = 10
 * :
 * 5 * 9 = 45
 */

#include <stdio.h>
int main(void)
{
    int dan, i;

    /* --- while 버전 --- */
    printf("Enter your dan : ");
    scanf("%d", &dan);

    i = 1;
    while (i <= 9)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++;
    }

    printf("\n");

    /* --- for 버전 --- */
    printf("Enter your dan : ");
    scanf("%d", &dan);

    for (i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }

    return 0;
}
