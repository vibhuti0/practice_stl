#include<iostream>
#include<array>
using namespace std;
int main()
{
    //int basic[5]={1,2,3,4,5};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd position "<<a.at(2)<<endl;
    cout<<"empty or not"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;
}