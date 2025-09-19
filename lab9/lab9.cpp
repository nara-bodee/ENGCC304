#include <stdio.h>

int main() {
    int N;
    int arr[N];

    printf("Enter N :\n");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) { // วนรับค่า N ครั้ง
        printf("Enter value[%d] :\n", i); // แสดงตำแหน่งที่รับค่า
        scanf("%d", &arr[i]); // รับค่าใส่ Array
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < N; i++) { // วนแสดงค่า Index
        printf("%d  ", i); // แสดงค่า Index
    }
    printf("\n"); 

    // แสดง Array (จำนวนเฉพาะ หรือ #)
    printf("Array: ");
    for (int i = 0; i < N; i++) { // วนแสดงค่า Array
        int num = arr[i]; // เก็บค่าที่ตำแหน่ง i ของ Array
        int prime = 1;   // สมมติว่าเป็นจำนวนเฉพาะ

        if (num < 2) { // ถ้าน้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
            prime = 0; // ไม่ใช่จำนวนเฉพาะ
        } else {
            for (int j = 2; j * j <= num; j++) { // ตรวจสอบตัวหารจาก 2 ถึง √num
                if (num % j == 0) { // ถ้าหารลงตัว
                    prime = 0; // ไม่ใช่จำนวนเฉพาะ
                    break;
                }
            }
        }

        if (prime) // ถ้าเป็นจำนวนเฉพาะ
            printf("%d  ", num); // แสดงค่าจำนวนเฉพาะ
        else
            printf("#  "); // แสดง # แทนค่าที่ไม่ใช่จำนวนเฉพาะ
    } 
    printf("\n");

    return 0;
}
