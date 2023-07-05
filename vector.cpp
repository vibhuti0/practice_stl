#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;//capacity=> how much memory is assigned .  It gets doubled .

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;//size=> no of elements in vector.

    cout<<"element at 2nd index is"<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
    cout<<i<<" ";}

    cout<<"before clear size="<<v.size()<<endl;
    v.clear();
    cout<<"after clear size="<<v.size()<<endl;
}
