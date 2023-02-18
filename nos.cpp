#include <bits/stdc++.h>
using namespace std;


int Triplets(int n)
{

int a = 0;


for (int i = 1; i <= n; ++i) {
for (int j = i; j <= n; ++j) {
int x = i * i + j * j;


int y = sqrt(x);


if (y * y == x && y <= n)
++a;
}
}

return a;
}


int main()
{

int n;
        cout<<"Enter the value: ";
        cin>>n;
cout <<"The triplets are: "<< Triplets(n);

return 0;
}
