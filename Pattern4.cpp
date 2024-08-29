#include<bits/stdc++.h>
using namespace std;
void pattern(int n , int space){
    space = 2*n - 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        for (int j = 1; j < space; j++)
        {
            cout<<" ";
        }
         for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }
        cout<<endl;   
        space -= 2;
    }
}
int main(){
    int n;
    int space;
 cout<<"enter the value of n: ";
  cin>>n;
  cout<<"the pattern is:"<<endl;
  pattern(n,space);
}
