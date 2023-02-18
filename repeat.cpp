#include <bits/stdc++.h>
using namespace std;

void Repeat(int arr[], int size)
{
int i, j;
cout << "Repeating numbers are ";
for (i = 0; i < size; i++) {
for (j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
cout << arr[i] << " ";
break;
}
}
}
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

Repeat(a, n);
return 0;
}