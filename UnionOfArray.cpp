#include<iostream>
#include<conio.h>

using namespace std;


void UnionOfArray(int a1[], int a2[], int size1, int size2, int result[],int &resultsize)
{
    int i = 0,j = 0,k = 0; 

    // iterate through both arrays and insert elements into the result
    // based on their order

    while (i < size1 && j < size2)
    {
        if (a1[i]<a2[j])
        {
            result[k++] = a1[i++];
           
        }
        else if (a1[i]>a2[j])
        {
            result[k++] = a2[j++];
        }
        else
        {
            result[k++] = a1[i++];
            j++;
        }
        
        
    }
    
    // copy the remaining element of the first array
    while (i<size1)
    {
        result[k++] = a1[i++];
    }
    
    // copy thye remaining elements of the second array
    while (j < size1)
    {
        result[k++] = a2[j++];
    }
    resultsize = k;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,5,6,7};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int result[n1+n2];
    int resultsize = 0;
    UnionOfArray(arr1,arr2,n1,n2,result,resultsize);
    cout << "Union of arrays :" << endl;
    for (int i = 0; i < resultsize; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
