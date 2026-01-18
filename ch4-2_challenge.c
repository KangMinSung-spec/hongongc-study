#include <stdio.h>

int main(void)
{
    double weight, height, BMI;
    int res;
    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf("%lf %lf", &weight, &height);
    height /= 100.0;
    BMI = weight / (height * height);
    

    res = (25.0 > BMI) && (BMI >= 20.0);
    printf("%s\n", res ? "표준입니다" : "체중관리가 필요합니다");
   
    return 0;
   
}
