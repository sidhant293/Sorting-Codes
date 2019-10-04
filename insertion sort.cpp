#include<iostream>
#define s 5
using namespace std;
void ins(int a[],int si){
for(int j=1;j<si;j++){
    int k=a[j];
    int i=j-1;
    while(i>=0&&a[i]>k){
        a[i+1]=a[i];
        i-=1;
    }
    a[i+1]=k;
}
cout<<"\nsorted array is: ";
for(int k=0;k<si;k++)
    cout<<a[k]<<" ";
}
int main(){
int a[s];
cout<<"enter array of "<<s<<" elements:";
for(int i=0;i<s;i++)
cin>>a[i];
ins(a,s);
return 0;
}
