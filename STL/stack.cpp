#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    stack <int> s; // declaring a stack

    // pushing elements in stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // printing the size of the stack
    cout<<"SIZE OF STACK :-> "<<s.size()<<endl<<endl;

    // top most element of stack
    cout<<"TOP MOST ELEMENT OF STACK :->"<<s.top()<<endl<<endl;

    // poppint the elements from stack
    while( !s.empty())
    {
        cout<<s.top() <<"  ";
        s.pop();
    }
    cout<<endl<<endl;
    return 0;
}