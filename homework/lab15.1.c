#include <stdio.h>
#include <ctype.h>

int countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", filename);
        return -1;
    }

    int count = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        }
    }

    fclose(file);
    return count;
}

int main() {
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s", filename);

    int wordCount = countWordsInFile(filename);
    if (wordCount >= 0) {
        printf("Total number of words in '%s' : %d words\n", filename, wordCount);
    }

    return 0;
}
