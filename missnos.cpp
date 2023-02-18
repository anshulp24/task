#include <bits/stdc++.h>
using namespace std;


int MissingNo(int a[], int n)
{

int N = n + 1;

int total = (N) * (N + 1) / 2;
for (int i = 0; i < n; i++)
total -= a[i];
return total;
}


int main()
{
int a[10],n;
cout<<"Enter size of array: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }


int miss = MissingNo(a, n);
cout << "The missing number:"<<miss;
return 0;
}
