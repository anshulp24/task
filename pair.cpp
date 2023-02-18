#include <bits/stdc++.h>

using namespace std;


bool check(int A[], int size, int x)
{
for (int i = 0; i < (size - 1); i++) {
for (int j = (i + 1); j < size; j++) {
if (A[i] + A[j] == x) {
                              cout<<"The pair is: "<<A[i]<<" "<<A[j]<<" ";
return true;
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
check(a, n, x);

return 0;
}