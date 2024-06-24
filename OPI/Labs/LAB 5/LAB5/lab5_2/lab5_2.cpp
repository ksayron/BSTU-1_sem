#include "Header.h"

using namespace std;



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char symbol;
    int n=0;
    setlocale(LC_CTYPE, "Russian");
    while(n!=4) {
        cout << "Выберите вариант использования программы" << endl;
        cout << "1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании,";
        cout << "если введен символ латинского алфавита, иначе вывод сообщения об ошибке; " << endl;
        cout << "2 – определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, ";
        cout << "если введен символ русского алфавита, иначе вывод сообщения об ошибке; " << endl;
        cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщения об ошибке" << endl;
        cout << "4 – выход из программы." << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "Введите символ:"<<endl;
            cin >> symbol;
            getLATCode(symbol);
        }break;
        case 2:
        {
            cout << "Введите символ:"<<endl;
            cin >> symbol;
            getRUScode(symbol);
        }break;
        case 3:
        {
            cout << "Введите символ:"<<endl;
            cin >> symbol;
            getnumbercode(symbol);
        }break;
        }
    }


}

