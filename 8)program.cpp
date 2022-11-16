#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

void removeAllOccurnce(multiset<int>&s)
{
      set<int>s1;
      for(multiset<int>::iterator t=s.begin();t!=s.end();t++)
      {
          s1.insert(*t);
      }
      s.clear();
      for(set<int>::iterator t1=s1.begin();t1!=s1.end();t1++)
      {
          s.insert(*t1);
      }
}
int main()
{
    multiset<int>d;
    multiset<int>::iterator t;
    int f;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        d.insert(f);
    }
    removeAllOccurnce(d);
    for(multiset<int>::iterator t=d.begin();t!=d.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;

}
