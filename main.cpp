#include <iostream>
#include <vector>
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
void writefile(vector<string> stroki)
{

}
void countfile(vector<string> stroki)
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
     vector<string> stroki{};
     readfile(stroki);
     writefile(stroki);
     countfile(stroki);
     sortfile(stroki);
     printfile(stroki);

    return 0;
}
