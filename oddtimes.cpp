#include<bits/stdc++.h>
using namespace std;

int getOdd(int arr[], int size)
{
for (int i = 0; i < size; i++) {

int count = 0;

for (int j = 0; j < size; j++)
{
if (arr[i] == arr[j])
count++;
}
if (count % 2 != 0)
return arr[i];
}
return 0;
}

int main()
{
        int a[10],s;
cout<<"Enter size of array: ";
        cin>>s;
        for(int i=0;i<s;i++)
        {
           cin>>a[i];
        }
cout<<"The numbers are: "<<getOdd(a,s);
return 0;
}
