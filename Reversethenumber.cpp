#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number = n;
    int rev = 0;
    int last_digit;
    while(n>0)
    {
        last_digit = n%10;
        rev = rev*10 + last_digit;
        n = n/10;
    }
    cout<< "the reverse number is "<<rev;
    if(rev == number){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}