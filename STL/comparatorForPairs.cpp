#include <bits/stdc++.h>
using namespace std;
/* Given a pair of vectors. If first elements of pairs are not equal sort in
ascending order of first elements of pair. But if first element of two pairs
are equal sort them according to descending order of second element.
  eg. input :-> { {1,4}, {5,2}, {5,9}}
      output :-> { {1,4}, {5,9}, {5,2}}
*/

// comparator function
bool comp( pair <int, int> e1, pair<int,int> e2)
{
    if( e1.first != e2.first)
    {
        if( e1.first < e2.first) return true;
        return false;
    }
    else
    {
        if( e1.second > e2.second) return true;
        return false;
    }
}
void printVector( vector < pair <int, int> > &vp)
{
    for( auto pr : vp)
    {
        cout<<pr.first<<"  "<<pr.second<<endl;
    }
    cout<<endl<<endl;
}
int main()
{
    system("cls");
    vector < pair<int,int> > vp = { {1,4}, {5,2}, {5,9}};
    cout<<"Before Sorting :->"<<endl;
    printVector(vp);
    sort(vp.begin(), vp.end(),comp);
    cout<<"After Sorting :->"<<endl;
    printVector(vp);
    cout<<endl<<endl;
    return 0;
}