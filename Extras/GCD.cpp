#include <iostream>
using namespace std;

int GCD(int a,int b){
    while (b!=0)
    {
        if(a<b){
            swap(a,b);
        }
        int temp=a;
        a=b;
        b=temp%b;
    }
    return a;
    
}

int main(){
    int a,b;
    cout<<"Enter First no. ";
    cin>>a;
    cout<<"Enter Second no. ";
    cin>>b;

    int gcd= GCD(a,b);
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;

    return 0;
}