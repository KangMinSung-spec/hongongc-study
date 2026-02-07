int main(void)
{
    int ch;
    int current_len = 0;  // 지금 입력 중인 단어의 길이
    int max_len = 0;      // 지금까지 본 단어 중 가장 긴 길이

    printf("단어를 입력하세요 (종료: Ctrl + Z):\n");

    // getchar로 한 글자씩 읽어서 처리해!
    while ((ch = getchar()) != EOF)  // Ctrl + Z를 누르면 EOF가 반환돼
    {
        if (ch == '\n' || ch == ' ' || ch == '\t')  // 한 단어가 끝났을 때 (줄바꿈, 공백 등)
        {
            if (current_len > max_len) 
            {
                max_len = current_len;  // 기록 경신!
            }
            current_len = 0;  // 다음 단어를 위해 길이 초기화
        }
        else 
        {
            current_len++;  // 단어의 글자라면 길이를 하나씩 올려
        }
    }

    // 마지막 단어가 줄바꿈 없이 EOF를 만났을 때를 위한 최종 체크
    if (current_len > max_len) 
    {
        max_len = current_len;
    }

    printf("\n가장 긴 단어의 길이 : %d\n", max_len);

    return 0;
}
