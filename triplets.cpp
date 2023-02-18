#include <bits/stdc++.h>

using namespace std;

bool triplets(int A[], int size, int y)
{
   
    for (int i = 0; i < size - 2; i++)
    {
 
   
        for (int j = i + 1; j < size - 1; j++)
        {
 
   
            for (int k = j + 1; k < size; k++)
            {
                if (A[i] + A[j] + A[k] == y)
                {
                    cout << "Triplet is " << A[i] <<
                        " " << A[j] << " " << A[k];
                    return true;
                }
            }
        }
    }
    return false;
}


int main()
{
int a[10],n,x;
        cout<<"Enter size of array: ";
        cin>>n;
        cout<<"Enter the number: ";
        cin>>x;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
triplets(a, n, x);
}