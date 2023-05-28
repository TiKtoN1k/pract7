#include <iostream>
#include <string>
#include <locale> 
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(0, "");
    //подсчёт количества слов в введёной строке
    string name;
    int size, word = 1;
    cout << "1. Введите своё ФИО: ";
    getline(cin, name); //вводим строку с пробелами 
    size = name.size(); //сoхраняем количество символов строки
    for (int i = 0; i < size; i++) {
        if (name[i] == ' ') {
            word += 1;
        }
    }
    cout << "В первой строке " << word << " слов(-a)" << endl;

    //вывод номера телефона
    string phone;
    cout << "2. Введите свой номер телефона:";
    cin >> phone;
    cout << "Номер телефона:\t" << phone << endl;

    //запрашиваем возраст, сколько было 3 года назад и нынешний, эти строки сравниваем;
    string vozrast;
    cout << "3. Введите свой возраст 3 года назад буквами: ";
    cin >> vozrast;
    string newy;
    cout << "4. Введите свой нынешний возраст буквами: ";
    cin >> newy;
    //сравниваем строки
    int result = vozrast.compare(newy);
    if (result > 0)
        cout << "Третья строка больше четвёртой!" << endl;
    else if (result < 0)
        cout << "Четвёртая строка больше третьей!" << endl;
    else
        cout << "Строки равны!" << endl;

    //осуществляем заполнение 5,6 и 7 строк
    string progr;
    cout << "5. Какие языки программирования вы знаете?" << endl;
    getline(cin, progr); string love_progr;
    cout << "6. Какой язык программирования вам нравиться?" << endl;
    cin >> love_progr;
    string dis_progr;
    // находим, с какого индекса начинается подстрока 6 в строке 5
    cout << "Подстрока 6 в строке 5 начинается с индекса " << progr.find(love_progr) << "." << endl;
    cout << "7. Какой вам меньше нравиться?\n";
    cin >> dis_progr;
    //выводим начальное значение 7 строки и изменённо
    cout << "Было:\t" << dis_progr << endl;
    //заменяем строку 7 на строку 6
    dis_progr.replace(0, dis_progr.size(), love_progr);
    cout << "Стало:\t" << dis_progr;
}