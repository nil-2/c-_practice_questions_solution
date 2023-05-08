
//here we weite a code for find sum of all elements in an array //
#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] ={4,7,9,10,20}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "original array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  " << endl;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout << "sum of all elements in an array : " << sum ;
    return 0;
}
