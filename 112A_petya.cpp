#include<iostream>
using namespace std;

int main()
{
    string one;
    cin>>one;
    string two;
    cin>>two;

    int i = 0;

    while(i < one.size())
    {
        if(tolower(one[i]) == tolower(two[i]))
        {
            i++;
        }
        else if(tolower(one[i]) > tolower(two[i]))
        {
            cout<<"1";
            break;
        }
        else{
            cout<<"-1";
            break;
        }
    }
    if(i>=one.size()) cout<<"0";
    return 0;
}