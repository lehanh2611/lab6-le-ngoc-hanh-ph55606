#include <math.h>
#include <stdio.h>

void cleanInput() {
    while (getchar() != '\n')
        ;
}
void inputNumber(int* input, char message[]) {
reInput:
    printf("%s", message);
    if (!scanf("%d", input)) {
        cleanInput();
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
            (currentNumber % (int)sqrt(currentNumber) == 0)) {
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
        for (int i = 0; i < arrLen; i++) {
            if (numberArr[i] < numberArr[i + 1]) {
                int temp = numberArr[i];
                numberArr[i] = numberArr[i + 1];
                numberArr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arrLen; i++) {
        printf("%d\n", numberArr[i]);
    }

    for (int i = 0; i < arrLen; i++) {
        if (numberArr[i] % 2 != 0) {
            printf("%d là số lẻ có vị trí là %d\n", numberArr[i], i + 1);
        }
    }
}

void bai2() {
    int arrLen;
    int output = 0;
    inputNumber(&arrLen, "Mời nhập độ số phần từ:");

    int numberArr[arrLen];
    for (int i = 0; i < arrLen; i++) {
        inputNumber(&numberArr[i], "Mời nhập số:");
    }

    for (int i = 0; i < arrLen; i++) {
        for (int i = 0; i < arrLen - 1; i++) {
            if (numberArr[i] > numberArr[i + 1]) {
                int temp = numberArr[i];
                numberArr[i] = numberArr[i + 1];
                numberArr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arrLen; i++) {
        printf("%d\n", numberArr[i]);
    }
}

int main() {
    int input;

    printf("Chọn chương trình!\n");
    printf("[1] Bài 1\n");
    printf("[2] Bài 2\n");
    printf("[3] Bài 3\n");
    printf("[4] Thoát\n");

reInput:
    printf("Nhập số bài muốn chọn\n");

    if (scanf("%d", &input) && input <= 4 && input > 0) {

    } else {
        cleanInput();
        goto reInput;
    }

    switch (input) {
    case 1: {
        bai1();
        break;
    }
    case 2: {
        bai2();
        break;
    }
    case 3: {
        bai3();
        break;
    }
    // case 4: {
    //     bai4();
    //     break;
    // }
    default:
    }
    return 0;
};
