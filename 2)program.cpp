#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

multiset<int>::iterator last(multiset<int>&s)
{
    return s.end();
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
    cout<<"The multiset elements"<<endl;
    for(t=d.begin();t!=last(d);t++)
    {
        cout<<*t<<" ";
    }
   getch();
   return 0;

}
