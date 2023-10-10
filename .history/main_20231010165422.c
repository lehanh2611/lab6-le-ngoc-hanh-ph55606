#include <stdio.h>

void inputNumber(int* numberAddress, char message[]) {
    printf("%s", message);

    while (!scanf("%d", numberAddress)) {
        while (getchar() != '\n')
            ;
    }
}

void bai1() {
    int arrLen;
    inputNumber(&arrLen, "Mời nhập độ số phần từ");

    int numberArr[arrLen];
    for (int i = 0; i < arrLen; i++) {
        inputNumber(&numberArr[i], "Mời nhập số");
    }

    for (int = 0; i < arrLen; i++) {
        }
}

int main(int argc, const char* argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
