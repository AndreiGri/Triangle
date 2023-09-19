#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int wand1 = 0;
    int wand2 = 0;
    int wand3 = 0;

    cout << endl;
    cout << " Введите длинну первой палочки: ";
    cin >> wand1;
    cout << " Введите длинну второй палочки: ";
    cin >> wand2;
    cout << " Введите длинну третьей палочки: ";
    cin >> wand3;

    if (wand1 + wand2 <= wand3 || wand2 + wand3 <= wand1 || wand3 + wand1 <= wand2) {
        cout << " Треугольник из этих палочек не получится!" << endl;
    }
    else {
        cout << " Треугольник из данного набора палочек получится!" << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}