#include <stdio.h>

int main() {
    int N, i, j, Prime;
    printf("Enter number : ");
    scanf("%d", &N);

    // วนจาก N ลงไปถึง 2
    for (i = N; i >= 2; i--) {
        Prime = 1; // สมมติว่าเป็นจำนวนเฉพาะ
        // ตรวจสอบว่า i หารด้วยเลขอื่น (2 ถึง i-1) ลงตัวไหม
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                Prime = 0; // ไม่ใช่จำนวนเฉพาะ
                break;
            }
        }
        if (Prime) {
            printf("%d ", i);
        }
    } return 0;
}
