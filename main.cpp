#include <iostream>
#include <vector>
#include <fstream> // УБРАТЬ

using namespace std;


void readfile(vector<string> stroki)
{

}
void writefile(vector<string>& stroki)
{
    ofstream file("output.txt", ios::binary);
    for (const auto& item : stroki) {
        file << item << "\n";
    }
    file.close();
    wcout << L"Данные выведены в файл output.txt" << endl;
}
void countfile(vector<string>& stroki)
{

}
void sortfile(vector<string> stroki)
{

}
void printfile(vector<string> stroki)
{

}
int main()
{
     setlocale(LC_ALL, "Russian");
     vector<string> stroki{"q", "qwer", "qw", "qwertyuio", "qwerty", "qwe", "qwertyu", "qwertyuiop"};
     readfile(stroki);
     writefile(stroki);
     countfile(stroki);
     sortfile(stroki);
     printfile(stroki);

    return 0;
}
