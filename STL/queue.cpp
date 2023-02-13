#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    queue <string> Q; // declaring a queue of string;

    // initial size of queue
    cout<<"Inital Size :-> "<<Q.size()<<endl<<endl;

    // pushing stirngs in Q
    Q.push("Hello");
    Q.push("Bro");
    Q.push("How");
    Q.push("Are");
    Q.push("You");

    cout<<"Current Size :-> "<<Q.size();

    //front element of queue;
    cout<<"Front Element :-> "<<Q.front()<<endl<<endl;

    // Rear element of queue;
    cout<<"Rear Element :-> "<<Q.back()<<endl<<endl;

    // printing all elements of Q
    cout<<"All elemnts of Q :-> "<<endl;
    while( !Q.empty())
    {
        cout<<Q.front()<<"  ";
        Q.pop();
    }
    cout<<endl<<endl;



    return 0;
}