#include <stdio.h>
#include <string.h> // strcmp 함수를 쓰기 위해 필요

int main(void)
{
    char str1[20], str2[20], str3[20];
    char *p1 = str1, *p2 = str2, *p3 = str3;
    char *temp; // 주소를 잠시 보관할 바구니

    printf("세 단어를 입력 : ");
    scanf("%s %s %s", str1, str2, str3);

    if (strcmp(p1, p2) > 0)  // 1. 첫 번째와 두 번째 비교   
    {
        temp = p1; p1 = p2; p2 = temp;
    }
    
    if (strcmp(p1, p3) > 0)  // 2. 첫 번째와 세 번째 비교
    {
        temp = p1; p1 = p3; p3 = temp;
    }
    
    if (strcmp(p2, p3) > 0)  // 3. 두 번째와 세 번째 비교
    {
        temp = p2; p2 = p3; p3 = temp;
    }

    printf("%s, %s, %s\n", p1, p2, p3);  // 결과 출력

    return 0;
}
