#include "Windows.h"
#include <iostream>
#include "marshrut.h"
using namespace std;
int main(int argc, char **argv)
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 string stroka;
 int key;
 cout << "Введите ключ: ";
 cin >> key;
 if (!cin) {
 cout << "Ключ неверен" << endl;
 return 0;
 }
 unsigned op;
 marshrut marshrut(key);
 do
 {
 cout << "Введите операцию (0-выйти, 1-зашифровать/расшифровать):";
 cin >> op;
 if (op == 1) {
 cout << "Введите строку: ";
 cin >> stroka;
 cout << marshrut.transform(stroka) << endl;
 }
 } while (op != 0);
 return 0;
}
