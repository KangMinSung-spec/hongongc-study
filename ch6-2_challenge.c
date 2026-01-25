#include <stdio.h>

int main(void) 
{
    int i, j, count = 0;  // 소수의 개수를 셀 변수(count) 추가

    for (i = 2; i <= 100; i++) 
    {
        for (j = 2; i % j != 0; j++);  // 나누어떨어질 때까지 j 증가

        if (i == j)  // 소수라면? 
        {                      
            printf("%d\t", i); // 탭(\t)으로 간격을 맞춰주면 더 예쁨
            count++;           // 소수 개수 하나 증가

            if (count % 5 == 0)  // 5개 찍을 때마다 
            { 
                printf("\n");  // 줄 바꿈
            }
        }
    }
    
    return 0;
}
