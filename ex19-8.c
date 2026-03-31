#include <stdio.h>

void input_data(int *, int *);  //두 정수를 입력하는 함수 선언
double average(int, int);  //평균을 구하는 함수 선언

int main(void)
{
    int a, b;
    double avg;
    
    input_data(&a, &b);  //두 정수 입력
    avg = average(a, b);  //평균 계산
    printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);  //입력값과 평균 출력
    
    return 0;
}

#include <stdio.h>  //printf, scanf 함수 사용을 위해 필요

void input_data(int *pa, int *pb)  //두 정수 입력 함수
{
    printf("두 정수 입력 : ");
    scanf("%d%d", pa, pb);
}

double average(int a, int b)  //평균을 구하는 함수
{
    int tot;
    double avg;
    
    tot = a + b;
    avg = tot / 2.0;
    
    return avg;
}
