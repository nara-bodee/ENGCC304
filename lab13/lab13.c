#include <stdio.h>

void swapNumbers(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    //ประกาศตัวแปร num1 และ num2 และรับค่าจากผู้ใช้
    int num1;
    int num2;

    printf("Enter num1 : \n");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for num1.\n");
        return 1;
    }

    printf("Enter num2 : \n");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for num2.\n");
        return 1;
    }
    
    //ประกาศตัวแปร ptr1 และ ptr2 เป็น Pointer และเก็บค่าที่อยู่ของ num1 และ num2 ตามลำดับ
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    // แสดงค่าก่อนการสลับ
    printf("\nBefore swap (num1 & num2) : %d, %d\n", num1, num2);
    
    //เรียกใช้ฟังก์ชัน swapNumbers โดยส่ง Pointer ทั้ง 2 ค่าเข้าไป
    swapNumbers(ptr1, ptr2);
    
    // แสดงค่าหลังการสลับ
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);
    
    return 0;
}