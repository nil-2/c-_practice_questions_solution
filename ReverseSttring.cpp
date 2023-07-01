#include <iostream>
#include <string.h>

using namespace std;

string reversestring(const string& str)
{
    string str1;
    //int len = strlen(str);
    for (int i = str.length()-1; i >=0; i--)
    {
        str1+=str[i];
    }
    return str1;
}

int main()
{
    string inpstr;
    cout << "enter a string :";
    cin >> inpstr;
    string reversed = reversestring(inpstr);

    cout << "reversed string " << reversed << endl;

    return 0;
}