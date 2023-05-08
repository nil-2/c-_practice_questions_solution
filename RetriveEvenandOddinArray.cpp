#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

int RetriveEvenandOdd(int arr[],int n)
{
    int eve=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
             eve++;
        }
        else
        {
            odd++;
        }
        
        
    }
 cout << "even elements : " << eve << endl;
 cout << "odd elements : " << odd << endl;

}

int main()
{
    int arr[] = {7,8,9,23,5,10,6,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    RetriveEvenandOdd(arr,n);
    return 0;
}
