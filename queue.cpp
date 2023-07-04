#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("vibhuti");
    q.push("joshi");
    q.push("manas");

    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first element"<<q.front()<<endl;
    cout<<"size after pop"<<q.size()<<endl;
}