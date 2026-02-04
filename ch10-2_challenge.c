
void print_nums(int *lotto_nums)
{
    int i;
    printf("로또 번호 : ");
    for (i = 0; i < 6; i++) #include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
    int lotto_nums[6];
    
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}

void input_nums(int *lotto_nums)
{
    int i, j;
    for (i = 0; i < 6; i++) 
    {
        printf("번호 입력 : ");
        scanf("%d", lotto_nums + i); // 일단 번호를 입력받음

        // 중복 검사 시작!
        for (j = 0; j < i; j++) 
        {
            if (lotto_nums[i] == lotto_nums[j]) 
            { 
                printf("같은 번호가 있습니다!\n");  // 방금 입력한 게 앞에 이미 있다면
                i--;  // 현재 순서를 하나 뒤로 물려서 다시 입력받게 함
                break;  // 중복 검사 반복문 탈출
            }
        }
    }
}

    {
        printf("%d  ", lotto_nums[i]);  // 주소에 가서 값을 꺼내와야 하니 *(주소) 형태인 lotto_nums[i]를 써주기
    }
    printf("\n");
}
