#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
for(int i=1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout<<"*"<<" ";
    }
        cout<<endl;
    }
}
int main(){
    int n;
 cout<<"enter the value of n: ";
  cin>>n;
  cout<<"the pattern is:"<<endl;
  pattern(n);
}
