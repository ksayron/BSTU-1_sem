#include "Header.h"
using namespace std;
void getLATCode(char c) {
    if (int(c) > 64 and int(c) < 91) { cout << "��������� ��������� � ��� � ASCII:" << c << " " << int(c) << endl;
    cout << "�������� ��������� � ��� � ASCII:" << char(int(c) + 32) << " " << int(c) + 32 << endl << "������� �����:32" << endl; }
    else if (int(c) > 96 and int(c) < 123) { cout << "��������� ��������� � ��� � ASCII:" << char(int(c) - 32) << " " << int(c) - 32 << endl;
    cout << "�������� ��������� � ��� � ASCII:" << c << " " << int(c) << endl << "������� �����:32" << endl; }
    else { cout << "Error!"; }
}

void getRUScode(char c) {
    if (int(c) > -65 and int(c) < -32) {
        cout << "��������� ��������� � ��� � Windows-1251:" << c << " " << int(c) + 256 << endl;
        cout  << "�������� ��������� � ��� � Windows-1251:" << char(int(c) + 32) << " " << int(c) + 256 + 32 << endl << "������� �����:32" << endl;
    }
    else if (int(c) > -33 and int(c) < 0) { cout << "��������� ��������� � ��� � Windows-1251:" << char(int(c) - 32) << " " << int(c) + 256 - 32 << endl;
    cout << "�������� ��������� � ��� � Windows-1251:" << c << " " << int(c) + 256 << endl << "������� �����:32" << endl; }
    else { cout << "Error!" << endl; }
}

void getnumbercode(char c) {
    if (int(c) > 47 and int(c) < 58) { 
        cout << "������ � ��� � ASCII" << c << " " << int(c) << endl; 
    }
    else {
        cout << "Error!" << endl;
    }
}