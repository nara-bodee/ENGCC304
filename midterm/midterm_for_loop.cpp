#include <stdio.h>


int main() {
    int N, i, j, prime;
    printf("Enter number : ");
    scanf("%d", &N);

    for (i = N; i >= 2; i--) {
  
        for (j = 2; j < i; j++) { // ลูปตรวจสอบตัวหาร
            if (i % j == 0) { // ถ้า i หาร j ลงตัว
                break; // ออกจากลูปทันที
            }
        }
        if (j == i) { // ถ้า j วิ่งมาถึง i ได้ แสดงว่าไม่มีตัวหาร
        printf("%d ", i);
        }
    }
    return 0;
}
