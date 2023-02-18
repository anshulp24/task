#include <bits/stdc++.h>
using namespace std;

int Palindrome(int num)
{

int n, k, rev = 0;

n = num;

while (num != 0) {
k = num % 10;
rev = (rev * 10) + k;
num = num / 10;
}

if (n == rev) {
return 1;
}
else {
return 0;
}
}
int main()
{

int n;
cout<<"Enter the number: ";
    cin>>n;
    if(!Palindrome(n))
    {
while (!Palindrome(n)) {
n = n + 1;
}
    }
    else
    {
        n++;
        while (!Palindrome(n)) {
n = n + 1;
}
    }

cout << "Next Palindrome :";
cout << n;
return 0;
}