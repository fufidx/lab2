#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>


using namespace std;


void readfile(vector<string>& stroki)
{
    ifstream file("text.txt");
    if (file.is_open())
    {
        cout<<"file open"<<endl;

       string stroka;
       while (getline(file,stroka))
       {
          stroki.push_back(stroka);
       }

    }
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
    int cnt = 0;

    for (const auto& item : stroki) {
        cnt += item.size();
    }
    wcout << L"Общее количество символов в файле: " << cnt << endl;
}
void sortfile(vector<string>& stroki)
{
    sort(stroki.begin(), stroki.end());
}
void printfile(vector<string>& stroki)
{
    for (int i=0; i < stroki.size(); i++)    {
        cout << stroki[i] << endl;    }
}

int main()
{
     setlocale(LC_ALL, "Russian");
     vector<string> stroki;
     readfile(stroki);
     writefile(stroki);
     countfile(stroki);
     sortfile(stroki);
     printfile(stroki);

    return 0;
}
