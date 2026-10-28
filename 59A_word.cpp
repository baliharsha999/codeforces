#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cntlower = 0;
    int cntupper = 0;

     for (int i = 0; i < s.length(); i++) {
        if(islower(s[i])) cntlower++;
        else cntupper++;
    }
    
    if(cntlower>=cntupper) 
    {
        for(int i= 0 ; i < s.length();i++)
        {
            s[i]= tolower(s[i]);
        }
    }
    else{
        for(int i= 0 ; i < s.length();i++)
        {
            s[i]= toupper(s[i]);
        }       
    }

    cout<<s;
    return 0;
}