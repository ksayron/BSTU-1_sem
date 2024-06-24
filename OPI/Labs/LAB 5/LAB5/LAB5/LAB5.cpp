#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int metro, talon, n = 0;
    double price = 0;
    for (int i = 0; i < 4; i++)
    {
        n++;
        switch (n)
        {
        case 1: cout << "Дорога Дом-Университет" << endl; break;
        case 2: cout << "Дорога Университет-Цирк" << endl; break;
        case 3: cout << "Дорога Цирк-Дом" << endl; break;
        case 4: cout << "Дорога Дом-Цирк" << endl; break;
        }
        cout << "Сколько жетонов для метро потратили? :" << endl;
        cin >> metro;
        cout << " Сколько талонов для  транспорта потратили? :" << endl;
        cin >> talon;
        price += (metro + talon) * 0.9;
    }
    cout << price;
}

