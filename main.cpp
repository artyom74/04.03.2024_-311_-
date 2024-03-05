#include <iostream>
#include <string>
using namespace std;

float calc_side(float r) {

    float pi = 3.14;

    cout << "Сторона квадрата: ";

    return r * sqrt(pi);
}

int main() {
    setlocale(LC_ALL, "ru");

    float radius;
    cout << "Введите радиус круга:" << endl;
    cin >> radius;

    cout << calc_side(radius);

    return 0;
}

/* Написать функцию, которая получает на вход радиус круга,
а возвращает сторону квадрата, равного этому кругу по площади.
Вызвать функцию в main, результат вывести тоже в main.*/ 