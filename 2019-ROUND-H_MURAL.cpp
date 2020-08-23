#include<iostream>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;
int ceil(float n){
    int k=n;
    if(k%2==0){
        return n/2;
    }
    else{
        return n/2+1;
    }
}
int main(){
    int test;
    cin>>test;
    unsigned long long int ans[test];
    for(int j=0;j<test;j++){
        int no;
        cin>>no;
        char arr[no],c='0';
        unsigned long long int max=0,sum=0;
        for(int i=0;i<no;i++){
            cin>>arr[i];
            if(i<ceil(no)){
                sum=sum+(int)arr[i]-(int)c;
                if(sum>max)
                    max=sum;
            }
            else{
                sum=sum-((int)arr[i-ceil(no)]-(int)c)+(int)arr[i]-(int)c;
                if(sum>max){
                    max=sum;
                }
            }
        }
        ans[j]=max;
    }
    for(int j=0;j<test;j++){
        cout<<"Case #"<<j+1<<": "<<ans[j]<<"\n";
    }
}
