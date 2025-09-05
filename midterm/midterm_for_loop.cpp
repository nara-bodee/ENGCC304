#include <stdio.h>


int main() {
    int N, i, j;
    printf("Enter number : ");
    scanf("%d", &N);

    for (i = N; i >= 2; i--) { // วนจาก N ลงไปถึง 2
  
        for (j = 2; j < i; j++) { // ลูปตรวจสอบตัวหาร
            if (i % j == 0) { // ถ้า i หาร j ลงตัว
                break; // ออกจากลูปทันที
            }//end if
        }//end for
        
        if (j == i) { // ถ้า j วิ่งมาถึง i ได้ แสดงว่าไม่มีตัวหาร
        printf("%d ", i);
        }//end if
    }//end for
    return 0;
}//end main
