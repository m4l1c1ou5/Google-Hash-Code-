#include<iostream>
#include<array>
using namespace std;
#define diff(h,l) (h>l?(h-l):(l-h))
#define ll long long
long long times_rule_break(ll a[],ll k){
    ll h=0,l=0,number_times_break=0,flag=1;
    for(ll i=1;i<k;i++){
        if(a[i]>a[i-1]){
            h++;
            l=0;
        }
        else if(a[i]<a[i-1]){
            l++;
            h=0;
        }
        if(h>3 || l>3){
            h=0;
            l=0;
            number_times_break++;
            
        }
    }
    return number_times_break;
}
int main(){
    ll t;
    cin>>t;
    ll m=t;
    while(t>0){
        t--;
        ll k;
        cin>>k;
        ll a[k];
        for(ll i=0;i<k;i++){
            cin>>a[i];
        }
        cout<<"Case #"<<m-t<<": "<<times_rule_break(a,k)<<"\n";
    }
}
