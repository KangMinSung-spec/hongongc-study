#include <stdio.h>
int main (void)
{
int a, b;
char ch;
printf("사칙연산 입력(정수) : ");
scanf("%d %c %d", &a, &ch, &b);

if ( ch == '+')
{
    printf("%d+%d=%d", a, b, a+b);
}
else if (ch == '-')
{
    printf("%d-%d=%d", a, b, a-b);
}
else if ( ch == '/')
{
    printf("%d/%d=%d", a, b, a/b);
}
else if (ch == '*')
{
    printf("%d*%d=%d", a, b, a*b);
}
else if (ch == '%')
{
    printf("%d%%%d=%d", a, b, a%b);
}
else 
{
    printf("잘못된 입력입니다");
}
return 0 ; 

}
