#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int num, i, j, count = 0;
    int *ptr;

    printf("양수 입력: ");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL) return 1; 

    for (i = 2; i <= num; i++)
    {
        int is_prime = 1; 

        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }

        if (is_prime) printf("%5d", i);
        else printf("%5c", 'X');

        count++;
        if (count % 5 == 0) printf("\n"); 
    }

    free(ptr);
    printf("\n");

    return 0;
}
