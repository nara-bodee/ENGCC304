#include <stdio.h>
int main() {
    int N = 0;
    printf("Enter value: \n");
    scanf("%d", &N); // รับค่าตัวเลขจากผู้ใช้
    if (N <= 0) { //ถ้าไม่ใช่ตัวเลข
        printf("Please enter number \n");
        return 1; 
    }
    if (N % 2 == 1) {
        // ถ้าเป็นเลขคี่: แสดงเลขคี่ตั้งแต่ 1 ถึง N
        printf("Series:", N);
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        // ถ้าเป็นเลขคู่: แสดงเลขคู่ตั้งแต่ N ถึง 0
        printf("Series:\n", N);
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }
    return 0;
}
