#include <iostream>
using namespace std;
void LAT_CHAR(char c) {
    if (int(c) > 64 and int(c) < 91) { cout << "Прописное написание и код в ASCII:" << c << " " << int(c) << endl << "Строчное написание и код в ASCII:" << char(int(c) + 32) << " " << int(c) + 32 << endl << "Разница кодов:32" << endl; }
    else if (int(c) > 96 and int(c) < 123) { cout << "Прописное написание и код в ASCII:" << char(int(c) - 32) << " " << int(c) - 32 << endl << "Строчное написание и код в ASCII:" << c << " " << int(c) << endl << "Разница кодов:32" << endl; }
    else { cout << "Error!"; }
}

void RUS_CHAR(char c) {
    if (int(c) > -65 and int(c) < -32) { cout << "Прописное написание и код в Windows-1251:" << c << " " << int(c) + 256 << endl << "Строчное написание и код в Windows-1251:" << char(int(c) + 32) << " " << int(c) + 256 + 32 << endl << "Разница кодов:32" << endl; }
    else if (int(c) > -33 and int(c) < 0) { cout << "Прописное написание и код в Windows-1251:" << char(int(c) - 32) << " " << int(c) + 256 - 32 << endl << "Строчное написание и код в Windows-1251:" << c << " " << int(c) + 256 << endl << "Разница кодов:32" << endl; }
    else { cout << "Error!" << endl; }
}

void NUMBER( char c) {
    if (int(c) > 47 and int(c) < 58) { cout << "Символ и код в ASCII" << c << " " << int(c) << endl; }
    else {
        cout << "Error!" << endl;
    }
}