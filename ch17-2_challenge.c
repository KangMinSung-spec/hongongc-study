#include <stdio.h>

// 1. 학생 정보를 하나로 묶는 구조체 (학번, 이름 추가)
typedef struct {
    int id;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    char grade;
} Student;

int main(void)
{
    Student s[5], temp;
    int i, j;

    // 2. 5번 물어보고 데이터 입력받기
    for (i = 0; i < 5; i++) {
        printf("학번 : "); scanf("%d", &s[i].id);
        printf("이름 : "); scanf("%s", s[i].name);
        printf("국어, 영어, 수학 점수 : "); 
        scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);

        // 계산 로직
        s[i].total = s[i].kor + s[i].eng + s[i].math;
        s[i].avg = s[i].total / 3.0;

        if (s[i].avg >= 90) s[i].grade = 'A';
        else if (s[i].avg >= 80) s[i].grade = 'B';
        else if (s[i].avg >= 70) s[i].grade = 'C';
        else s[i].grade = 'F';
        printf("\n");
    }

    // 3. 정렬 전 데이터 출력
    printf("# 정렬 전 데이터...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %4d %4d %4d %5d %7.1f %3c\n", 
            s[i].id, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].avg, s[i].grade);
    }

    // 4. 총점 순으로 내림차순 정렬 (버블 정렬)
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (s[i].total < s[j].total) {
                temp = s[i]; // 구조체 통째로 교체 (이름, 학번 다 같이 이동)
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // 5. 정렬 후 데이터 출력
    printf("\n# 정렬 후 데이터...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %4d %4d %4d %5d %7.1f %3c\n", 
            s[i].id, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].avg, s[i].grade);
    }

    return 0;
}
