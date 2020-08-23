#include<iostream>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    ll m=t;
    while(t>0){
        t--;
        ll n;
        cin>>n;
        ll v[n];
        for(ll i=0;i<n;i++)
        cin>>v[i];
        ll max=-1,ans=0;
        for(ll i=0;i<n;i++){
            if(v[i]>max){
                if(i==n-1){
                    ans++;
                }
                else{
                    if(v[i]>v[i+1]){
                        ans++;
                    }
                }
                max=v[i];
                
            }
        }
        cout<<"Case #"<<m-t<<": "<<ans<<"\n";
    }
}
