#include <math.h>
#include <stdio.h>

void inputNumber(int* input, char message[]) {
reInput:
    printf("%s", message);
    if (!scanf("%d", input)) {
        while (getchar() != '\n')
            ;
        goto reInput;
    }
}

void bai1() {
    int arrLen;
    int output;
    inputNumber(&arrLen, "Mời nhập độ số phần từ:");

    int numberArr[arrLen];
    for (int i = 0; i < arrLen; i++) {
        inputNumber(&numberArr[i], "Mời nhập số:");
        int currentNumber = numberArr[i];
        if (currentNumber / currentNumber == 0 &&
            currentNumber / sqrt(currentNumber) == 0) {
            output += currentNumber;
        }
    }

    for (int i = 0; i < arrLen; i++) {

        printf("%d", numberArr[i]);
    }
}

int main(int argc, const char* argv[]) {
    bai1();
    return 0;
}
