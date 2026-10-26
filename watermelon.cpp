#include<iostream>
using namespace std;

bool watermelon(int weight){
    if(weight % 2 == 0 && weight>2)return true;
    return false;
}

int main(){
    int weight;
    cin>> weight;
    if(watermelon(weight)) cout<<"YES";
    else cout<<"NO";
    return 0;
}