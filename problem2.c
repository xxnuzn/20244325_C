/*
 * 문제 2: while 반복문을 사용해 1부터 n까지 홀수의 합을 구하는 프로그램
 */

#include <stdio.h>
int main(void)
{
    int i = 1;
    int n;
    int sum = 0;
    scanf("%d", &n);
    while( i <= n )
    {
        if( i % 2 != 0 )
            sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}
