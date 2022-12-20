#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    int n;
    cin>>n;
    int a[n];
    int even=0,odd=0;
    loop(i,0,n-1){
        cin>>a[i];
        if(a[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(even!=n){
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
    
    return 0;
}