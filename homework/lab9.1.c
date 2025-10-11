#include <stdio.h>

int main() {
    int N;
    printf("Enter N :\n");    
    scanf("%d", &N);

    int arr[N];                
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]); 
    }

    
    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%d  ", i);    
    }
    printf("\n");

    
    printf("Array: ");
    for (int i = 0; i < N; i++) {
        int num = arr[i];      

        if (num < 2) {
         
            printf("#  ");
        } else {
            int j;
            int isComposite = 0;   

            
            for (j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                   
                    isComposite = 1;
                    break;         
                }
            }

            if (isComposite == 0) {
                
                printf("%d  ", num);
            } else {

                printf("#  ");
            }
        }
    }
    printf("\n");

    return 0;   
}