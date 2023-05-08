#include <iostream>
#include <string>
using namespace std;
// using swap method 

// int ReverseString(string str)
// {
   //  int n = str.length();
   //  for (int i = 0; i < n/2; i++)
   //  {
      //   swap(str[i],str[n-i-1]);
   //  }
 //  cout << str;
// } 
int  ReverseString1(string str)
{
    int n = str.length();
    for (int i = n-1; i >=0 ; i--)
    {
        cout << str[i];
    }
   // cout << str;
    
}

int main()
{
    string str;
    cout << "enter a string : " << endl;
    cin >> str;
    
    cout << "Reverse String is : " << endl;
    ReverseString1(str);
    return 0;
}
