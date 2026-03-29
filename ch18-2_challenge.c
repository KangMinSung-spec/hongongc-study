#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fa, *fb, *fc;
    char registered[10][21]; // 등록 단어 (최대 10개, 길이 20)
    char word[21];           // b.txt에서 읽어올 단어
    int count = 0, i, found;

    // 1. 파일 열기
    fa = fopen("a.txt", "r");
    fb = fopen("b.txt", "r");
    fc = fopen("c.txt", "w");

    if (fa == NULL || fb == NULL || fc == NULL) return 1;

    // 2. a.txt에서 등록된 단어들을 배열에 저장
    while (count < 10 && fscanf(fa, "%s", registered[count]) != EOF) {
        count++;
    }

    // 3. b.txt에서 단어를 하나씩 읽어서 대조
    while (fscanf(fb, "%s", word) != EOF) {
        found = 0; // 등록 여부 확인용 (0이면 못 찾음)

        for (i = 0; i < count; i++) {
            if (strcmp(word, registered[i]) == 0) {
                found = 1; // 등록된 단어 발견!
                break;
            }
        }

        // 4. 등록되지 않은 단어만 c.txt에 출력
        if (found == 0) {
            fprintf(fc, "%s\n", word);
        }
    }

    // 5. 파일 닫기 (자원 반납)
    fclose(fa);
    fclose(fb);
    fclose(fc);

    return 0;
}
