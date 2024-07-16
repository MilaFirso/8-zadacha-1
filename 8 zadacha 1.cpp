#include <iostream>
#include <string>
#include <exception>
using namespace std;


int function(std::string str, int forbidden_length)
{ 
    if (forbidden_length == str.length())
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    }
    return static_cast<int>(str.length());
    
};

int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");

    std::string str;
    int forbidden_length = 0;

    cout << "Введите запретную длину: " << endl;
    cin >> forbidden_length;

    try
    {
        do {
            cout << "Введите слово: " << endl;
            cin >> str;
            function(str, forbidden_length);

            cout << "Длина слова " << str << " равна " << str.length() << endl;
        } 
        while (forbidden_length != str.length());

    }
    catch (const std::exception& ex)
    {
        cout << std::endl << ex.what() << std::endl;
    }
 
       
}

