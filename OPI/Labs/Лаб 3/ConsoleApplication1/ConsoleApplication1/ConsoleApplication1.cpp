#include <iostream>
#include <string>
#include <codecvt>

int main() {
    std::wstring text = L"KucherukNikolay2005";

    // Преобразование в строку UTF-8
    std::wstring_convert<std::codecvt_utf8<wchar_t>> utf8_converter;
    std::string utf8_encoded = utf8_converter.to_bytes(text);

    // Вывод строки UTF-8
    std::cout << "UTF-8: " << utf8_encoded << std::endl;

    return 0;
}
