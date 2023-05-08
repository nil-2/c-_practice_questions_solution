#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void closestToZero(int arr[], int n)
{
    if(n < 2)
    {
        cout << "Invalid";
        return;
    }

    int left_min = 0;
    int right_min = 1;
    int sum_min = arr[0] + arr[1]; // -2

    for(int i = 0; i<n - 1;i++)
    {
        for(int j = i+1; j<n; j++)
        {
           int sum = arr[i] + arr[j];//-2//7
           cout<<"on "<<i<<" "<<j<<" sum is  "<<sum<<" and sum_min is : " <<sum_min<< " "<<endl;

           if(abs(sum_min) > abs(sum))//2>2//2>7//
           {
            sum_min = sum;
            left_min = i;
            right_min = j;
           }
        }
    }

    cout << "Sum closest to zero elements : " << arr[left_min] << " and " << arr[right_min];
}

void closestToZero(int arr[], int n)
{
    if (n < 2) {
        cout << "Invalid";
        return;
    }

    int sum = 0, sum_min = INT_MAX ;
    int start = 0, end = n - 1;//5
    int start_min = 0, end_min = n - 1;//5

    // sort the elements
    sort(arr, arr + n);

    while (start < end) {//1 < 1
        sum = arr[start] + arr[end];//5//-1//0//-1

        // finding minimum sum
        if (abs(sum) < abs(sum_min)) //5<9//1<5//0<1
        {
            sum_min = sum;//9//5//-1//0
            start_min = start;//0//0//0//1
            end_min = end;//5//4//3//3
        }
        if (sum < 0)//9<0//5<0//-1<0//0<0//
            start++;
        else
            end--;
    }

    cout << "Sum closest to zero elements: "
         << arr[start_min] << " and " << arr[end_min];
}

int main()
{
    int arr[] = {1,-3,10,2,-2,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    closestToZero(arr, n);

    return 0;
}