//  Пользователь вводит целое число. Необходимо вывести все
//  целые числа, на которое заданное число делиться без остатка

#include <iostream>

using namespace std;

// Функция для вывода всех чисел, на которые число делится без остатка
void printDivisors(int num) {
    cout << "Number " << num << " can be divided without a remainder by: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int inputNum;

    // Запрашиваем у пользователя ввести целое число
    cout << "Input an integer: ";
    cin >> inputNum;

    // Вызываем функцию для вывода всех чисел, на которые введенное число делится без остатка
    printDivisors(inputNum);

    system("pause");
    return 0;
}