#include <stdio.h>

// 1. 수식 입력을 위한 매크로 함수 (입력 성공 여부를 반환함)
#define INPUT_EXPR(a, op, b) (scanf("%d %c %d", &(a), &(op), &(b)))

// 2. 사칙연산 처리를 위한 매크로 함수 (삼항 연산자로 깔끔하게 처리)
#define CALCULATE(a, op, b) \
    ((op) == '+' ? (a) + (b) : \
     (op) == '-' ? (a) - (b) : \
     (op) == '*' ? (a) * (b) : \
     (op) == '/' ? (double)(a) / (b) : 0)

int main(void)
{
    int num1, num2;
    char operator;

    // Ctrl+Z를 누를 때까지 무한 반복 (EOF 체크)
    while (1)
    {
        printf("수식 입력(종료 Ctrl+Z) : ");
        
        // 매크로 함수로 입력받기
        if (INPUT_EXPR(num1, operator, num2) == EOF) break;

        // 결과 출력 (나눗셈은 실수로 출력될 수 있게 처리)
        if (operator == '/') {
            printf("%d %c %d = %.2f\n", num1, operator, num2, (double)CALCULATE(num1, operator, num2));
        } else {
            printf("%d %c %d = %.0f\n", num1, operator, num2, (double)CALCULATE(num1, operator, num2));
        }
    }

    return 0;
}
