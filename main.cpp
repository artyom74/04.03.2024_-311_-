#include <iostream>
#include <string>
using namespace std;

float calc_side(float r) {

    float pi = 3.14;

    cout << "������� ��������: ";

    return r * sqrt(pi);
}

int main() {
    setlocale(LC_ALL, "ru");

    float radius;
    cout << "������� ������ �����:" << endl;
    cin >> radius;

    cout << calc_side(radius);

    return 0;
}

/* �������� �������, ������� �������� �� ���� ������ �����,
� ���������� ������� ��������, ������� ����� ����� �� �������.
������� ������� � main, ��������� ������� ���� � main.*/ 