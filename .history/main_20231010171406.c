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
    int output = 0;
    inputNumber(&arrLen, "Mời nhập độ số phần từ:");

    int numberArr[arrLen];
    for (int i = 0; i < arrLen; i++) {
        inputNumber(&numberArr[i], "Mời nhập số:");
        int currentNumber = numberArr[i];

        if (currentNumber / currentNumber == 1 &&
            currentNumber / sqrt(currentNumber) == 1) {
            output += currentNumber;
        }
    }

    printf("Kết quả: %d", output);
}

void bai3() {
    int arrLen;
    int output = 0;
    inputNumber(&arrLen, "Mời nhập độ số phần từ:");

    int numberArr[arrLen];
    for (int i = 0; i < arrLen; i++) {
        inputNumber(&numberArr[i], "Mời nhập số:");
    }

    for (int i = 0; i < arrLen; i++) {
        for (int i = 0; i <= arrLen - 1; i++) {
            if (numberArr[i] < numberArr[i + 1]) {
                int temp = numberArr[i];
                numberArr[i] = numberArr[i + 1];
                numberArr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arrLen; i++) {
        printf("%d", numberArr[i]);
    }

    for (int i = 0; i < arrLen; i++) {
        if (numberArr[i] % 2 != 0) {
            printf("%d là số lẻ có vị trí là %d", numberArr[i], i + 1);
        }
    }
}

int main(int argc, const char* argv[]) {
    bai3();
    return 0;
}
