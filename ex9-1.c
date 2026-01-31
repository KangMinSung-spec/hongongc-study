#include <stdio.h>

int main(void)
{
    int a;  //1.int형 변수 선언
    double b;  //2.double형 변수 선언
    char c;  //3.char형 변수 선언
    
    printf("int형 변수의 주소 : %u\n", &a);  //주소 연산자로 주소 계산
    printf("double형 변수의 주소 : %u\n", &b);  
    printf("char형 변수의 주소 : %u\n", &c);  
    
    return 0;
}
