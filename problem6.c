/*
 * 문제 6: 다음 예와 같은 결과가 출력되도록 중첩 while 문의 프로그램 코드를 완성하시오.
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
    i = 1;
    while( i <= 5 )
    {
        j = 1;
        while( j <= i )
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
