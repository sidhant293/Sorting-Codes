#include<iostream>
#include<stack>
using namespace std;

bool is_correct(string);

int main(){

cout<<"Enter parenthesis"<<endl;
string s;
cin>>s;

cout<<endl<<is_correct(s);

return 0;
}

bool is_correct(string s){

    stack<char> estack;
    int i=0;
    while(s[i]!='\0'){
        if( s[i]=='[' || s[i]=='{' || s[i]=='(' ){
            estack.push(s[i]);
        }else if( s[i]==']' || s[i]=='}' || s[i]==')' ){
            if( estack.empty() ){
                return false;
            }else if(estack.top()=='{' && s[i]=='}'){
                estack.pop();
            }else if(estack.top()=='[' && s[i]==']'){
                estack.pop();
            }else if(estack.top()=='(' && s[i]==')'){
                estack.pop();
            }
        }
        i++;
    }
    return estack.empty() ? true:false;
}
