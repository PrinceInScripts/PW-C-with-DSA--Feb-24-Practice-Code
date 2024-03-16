

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter a row no. : ";
    cin>>m;
    int n;
    cout<<"enter a column no. : ";
    cin>>n;
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
       
        cout<<endl;
    }
}