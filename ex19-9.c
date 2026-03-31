#include <stdio.h>

int input_data(void);  //양수를 입력하고 그 합을 반환
double average(void);  //평균을 구하는 함수
void print_data(double);  //출력 함수

int count = 0;  //입력한 양수의 수 누적
static int total = 0;  //입력한 양수의 합

int main(void)
{
    double avg;  //입력한 양수의 평균
    
    total = input_data();  //양수를 입력하고 그 합을 반환
    avg = average();  //평균 계산
    print_data(avg);
    
    return 0;
}

void print_data(double avg)
{
    printf(" 입력한 양수의 개수 : %d\n", count);
    printf(" 전체 합과 평균 : %d, %.1lf\n", total, avg);
}

#include <stdio.h>

extern int count;  //main.c 파일의 전역 변수 count 공유
int total = 0;  //전역 변수 선언

int input_data(void)
{
    int pos;  //양수 저장
    
    while (1)
    {
        printf("양수 입력 : ");
        scanf("%d", &pos);  //양수 입력
        if (pos < 0) break;  //음수면 입력 종료
        count++;  //개수 증가
        total += pos;  //입력값을 전역 변수 total에 누적
    }
    
    return total;  //전역 변수 total의 값 반환
    
extern int count;  //main.c의 전역 변수 count 공유
extern int total;  //input.c의 전역 변수 total 공유
    
double average(void)
{
    return total / (double)count;  //입력값의 평균 반환
}
