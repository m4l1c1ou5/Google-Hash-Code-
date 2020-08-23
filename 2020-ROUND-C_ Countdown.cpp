#include<iostream>
#include<vector>
#define ll long long
#define vl vector<ll> 
using namespace std;
ll countdown(vl arr,ll k){
    ll size=arr.size(),ans=0,flag=1,j;
    for(ll i=0;i<size;i++){
        if(arr[i]==k){
            if(i+k-1<size){
                ll temp=k-1;
                for(j=i+1;j<i+k;j++,temp--){
                    if(arr[j]!=temp){
                        i=j-1;
                        flag=0;
                        break;
                    }
                    else
                        flag=1;
                }
                if(flag==1){
                    ans++;
                    flag=0;
                }
            }
        }
    }
    return ans;
}
int main(){
    ll t;
    cin>>t;
    for(ll cas=1;cas<=t;cas++){
        ll n,k,temp;
        cin>>n>>k;
        vl a;
        while(n--){
            cin>>temp;
            a.push_back(temp);
        }
        cout<<"Case #"<<cas<<": "<<countdown(a,k)<<"\n";
    }
}
