#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void readfile(vector<string> stroki)
{

}
void writefile(vector<string> stroki)
{

}
void countfile(vector<string> stroki)
{

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
     vector<string> stroki{};
     readfile(stroki);
     writefile(stroki);
     countfile(stroki);
     sortfile(stroki);
     printfile(stroki);

    return 0;
}
