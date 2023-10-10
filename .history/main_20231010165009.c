#include <stdio.h>

void inputNumber(int* numberAddress, char message[]) {
    printf("%s", message);

    while (!scanf("%d", numberAddress)) {
        while (getchar() != '\n')
            ;
    }

    int bai1() {
        int arrLen;
        inputNumber(&arrLen, "Mời nhập độ số phần từ");
        int numberArr[];
    }

    int main(int argc, const char* argv[]) {
        // insert code here...
        printf("Hello, World!\n");
        return 0;
    }
