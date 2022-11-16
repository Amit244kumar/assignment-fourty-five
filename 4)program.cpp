#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

long int MaxSize(multiset<int>&s)
{
    return s.max_size();
}
int main()
{
    multiset<int>d;
    cout<<"The multiset can contain max "<<MaxSize(d)<<" number of elements";
    getch();
    return 0;

}
