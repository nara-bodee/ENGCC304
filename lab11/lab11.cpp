#include <stdio.h>
#include <math.h>

int armstrong(int n){
    int temp = n;
    int sum = 0;
    int digits = 0;

    for(temp = n ; temp >0 ; temp/=10){
        digits++;
    }

    for (temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        sum += pow(digit, digits);
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    if(armstrong(n)){
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    return 0;
}