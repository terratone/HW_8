//  Пользователь вводит два целых числа. Необходимо вывести все целые числа, 
//  на которые оба введенных числа делятся без остатка

#include <iostream>

using namespace std;

// Функция для вывода всех общих делителей для двух чисел
void printCommonDivisors(int num1, int num2) {
    cout << "Common divisors of numbers " << num1 << " and " << num2 << " are:\n";
    int maxDivisor = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= maxDivisor; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num1, num2;

    // Запрашиваем у пользователя ввести два целых числа
    cout << "Input the first number: ";
    cin >> num1;

    cout << "Input the second number: ";
    cin >> num2;

    // Вызываем функцию для вывода всех общих делителей для двух чисел
    printCommonDivisors(num1, num2);

    system("pause");
    return 0;
}