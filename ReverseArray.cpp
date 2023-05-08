#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;
int Reversearray(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    

}

int main()
{
    int arr[]={4,7,9,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "original array : " << endl;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " " <<  endl;
    }
    cout << "reverse array :";
    Reversearray(arr,n);
    
    return 0;
}
