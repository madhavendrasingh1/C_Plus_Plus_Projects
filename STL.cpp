//Standard Template Library
#include <bits/stdc++.h>
using namespace std;
//Iterator is used as a pointer
/* Container--> 1) Vector
                2)List
                3)deque(most functions same as vector)
                4)Stack LIFO
                5)Queue FIFO
                6)Priority Queue
                7)Set-sorted and unique
                8)Multiset-sorted and not unique
                9)Map- unique key value pair
                10)Multimap-sorted key value pair
            *)we can sort using STL
             */
    int main(){
        pair<int,int> a[] = {{1,2},{5,8},{7,4}};
        sort(a,a+3,greater<pair<int,int>>());
        cout << "Sorted array: ";
         for(int i = 0; i < 3; i++) {
        cout << "(" << a[i].first << ", " << a[i].second << ") "<<endl;
    }
    int num = 8;
    int cnt = __builtin_popcount(num);
    cout<<"the number of 1 in bit "<< cnt <<endl;
    string s = "123";
    do{
        cout<<"all permutation of string s " << s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    

    }

