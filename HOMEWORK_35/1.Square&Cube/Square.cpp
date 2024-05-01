//  Пользователь вводит целое число А.Программа должна
//  определить, что куб суммы цифр этого числа равен А * А

#include <iostream>

using namespace std;

// Функция для подсчета суммы цифр числа
int sumDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Функция для проверки равенства куба суммы цифр числа и квадрата числа
bool checkCubeSumEqualsSquare(int num) {
    int sum = sumDigits(num);
    int square = num * num; // квадрат числа

    return sum * sum * sum == square;
}

int main() {
    // Объявляем переменные для ввода числа
    int num;

    // Запрашиваем у пользователя ввести целое число
    cout << "Input an integer: ";
    cin >> num;

    // Проверяем условие, что куб суммы цифр числа равен квадрату числа с помощью функции checkCubeSumEqualsSquare
    if (checkCubeSumEqualsSquare(num)) {
        cout << "The cube of the sum of the digits of a number is equal to the square of the number\n";
    }
    else {
        cout << "The cube of the sum of the digits of a number is NOT equal to the square of the number\n";
    }
    system("pause");
    return 0;
}