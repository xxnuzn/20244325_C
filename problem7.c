/*
 * 문제 7: 문제 6과 같은 결과를 출력하도록 중첩 for문을 사용하여 프로그램 코드를 작성하시오.
 *
 * [출력 결과]
 * *
 * **
 * ***
 * ****
 * *****
 */

#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
