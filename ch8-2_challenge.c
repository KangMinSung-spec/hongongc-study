#include <stdio.h>

int main(void)
{
    char str[80];
    int i, count = 0;

    printf("문장 입력 : ");   
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    { 
        if (str[i] >= 'A' && str[i] <= 'Z')  // 아스키코드에서 대문자 범위(65~90)인지 확인
        { 
            str[i] = str[i] + 32;  // 대문자에 32를 더해 소문자로 변환
            count++;  // 변환 횟수 누적
        }
    }

    printf("바뀐 문장 : %s", str);
    printf("바뀐 문자 수 : %d\n", count);

    return 0;
}
