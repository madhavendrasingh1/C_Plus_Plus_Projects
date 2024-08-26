#include<iostream>
using namespace std;
int main()  
{
    int marks;
    cin>>marks;
    if(marks>=80&&marks<=100)
    {
        cout<<"Grade A And yours marks are "<<marks<<endl;
    }
    else if(marks>=70&&marks<=79)
    {
        cout<<"Grade B And yours marks are "<<marks<<endl;
    }
    else if(marks>=60&&marks<=69)
    {
        cout<<"Grade C And yours marks are "<<marks<<endl;
    }
    else if(marks>=50&&marks<=59)
    {
        cout<<"Grade D And yours marks are "<<marks<<endl;
    }
    else if(marks>=40&&marks<=49)
    {
        cout<<"Grade E And yours marks are "<<marks<<endl;
    }
    else
    {
        cout<<"Grade F And yours marks are "<<marks<<endl;
    }
}