#include<iostream>
using namespace std;
int main(){
    int a,b=0,c,f=1,i,j,sum=0,k;
    cout<<"enter the number"<<endl;
    cin>>a;
    k=a;
    while(a>0){
        i = a%10;
        a =a/10;
        cout<<i;
        for(j=i;j>1;j--){
            f = j*f;
        }
        cout<<"factorial:"<<f<<endl;

        sum = f + sum;
        f = 1;
    }

    cout<<sum<<endl;
    if(sum == k){
        cout<<"this is strong number"<<endl;
    }
    else{
        cout<<"this is not strong number"<<endl;
    }
    return 0;
}