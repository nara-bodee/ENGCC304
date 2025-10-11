#include <stdio.h>

int main() {
    char word[100];
    printf("Enter word:\n");
    scanf("%99s", word);

    
    int len = 0;
    while (word[len] != '\0') {
        len++;
    }

    
    for (int i = 0; i < len / 2; i++) { 
        char a = word[i];
        char b = word[len - i - 1];
                                  
        if (a != b) { 
            printf("Not Pass.\n");
            return 0;
        }
    }

    printf("Pass.\n");
    return 0;
}
