#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout <<"Madhavendra" ;
        cout << endl ;
    }
    print(i+1,n);
}
int main(){
    int n;
    cout<<"enter the number";
    cin >> n;
    print(1,n);
}
//Basic Reccursion Problem