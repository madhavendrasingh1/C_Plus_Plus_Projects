#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star = i;
        if(i>n){
            star = 2*n - i;
        }
        for (int j = 1;j<=star;j++){
            cout<<"*";
        }
        for (int j = 1;j<=spaces;j++){
            cout<<" ";
        }
        for (int j = 1;j<=star;j++){
            cout<<"*";
        }
    cout<<endl;
    if(i<n){
        spaces -= 2;
    }
    else{
        spaces += 2;
    }
    }
}
int main(){
    int n;
 cout<<"enter the value of n: ";
  cin>>n;
  cout<<"the pattern is:"<<endl;
  pattern(n);
}
