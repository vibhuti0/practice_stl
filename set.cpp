#include<iostream>
#include<set>
using namespace std;

int main()
{//display evey element once in sortd order.
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);

   for(auto i: s){
    cout<<i<<endl;
   }
  s.erase(s.begin());

   for(auto i: s){
    cout<<i<<endl;
   }



}