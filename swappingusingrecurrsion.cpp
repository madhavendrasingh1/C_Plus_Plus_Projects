#include<bits/stdc++.h>
using namespace std;
void f(int n,int i,int arr[]){
     if(i>=n/2){
        return;
     }
     else{
        swap(arr[i],arr[n-i-1]);
        f(n,i+1,arr);
     }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    f(n,0,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}