#include <stdio.h>

int main(){
    int number;

    printf("Nhập một số nguyên: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Số %d là số nguyên dương.\n", number);
    } else if (number < 0) {
        printf("Số %d là số nguyên âm.\", number);
    } else {
        printf("Số bạn nhập là: 0.\n");
    }

    return 0;
}