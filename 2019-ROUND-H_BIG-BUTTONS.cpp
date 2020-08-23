#include<iostream>
using std::string;
using std::cin;
using std::cout;
int size;
class tries{
public:
    char value;
    int key;
    tries* ptr[2];
    tries(){
        ptr[0]=NULL;
        ptr[1]=NULL;
        key=-1;
    }
};
int hash(char val){
    if(val=='B')
        return 0;
    else
        return 1;
}
void insert_tries(std::string value,tries* head){
    int i;
    for(i=0;value[i]!='\0';i++){
        if(head->ptr[hash(value[i])]!=NULL)
            head=head->ptr[hash(value[i])];
        else{
            tries* node=new tries;
            node->value=value[i];
            head->ptr[hash(value[i])]=node;
            head=head->ptr[hash(value[i])];
        }
    }
    head->key=i;
}
unsigned long long int fact(int n){
    unsigned long long int mul=1;
    for(int i=0;i<n;i++){
        mul*=2;
    }
    return mul;
}
unsigned long long int count_node=0;
string main_str;
void count(tries* head){
    if(head->key!=-1){
        count_node+=fact(size-head->key);
        goto a;
    }
    if(head->ptr[0]!=NULL){
        count(head->ptr[0]);
    }
    if(head->key!=-1){
        count_node+=fact(size-head->key);
        goto a;
    }
    if(head->ptr[1]!=NULL){
        count(head->ptr[1]);
    }
a:
    count_node+=0;
}
int main(){
    int test;
    cin>>test;
    unsigned long long int ans[test];
    for(int i=0;i<test;i++){
    tries* head=new tries;
    head->value='a';
    tries* node=new tries;
    node=head;
    cin>>size;
    int n;
    std::cin>>n;
    std::string word[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
        insert_tries(word[i],node);
    }
    node=head;
    count(node);
    ans[i]=fact(size)-count_node;
        count_node=0;
    }
    for(int i=0;i<test;i++){
        cout<<"Case #"<<i+1<<": "<<ans[i]<<"\n";
    }
}
