#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    // dang dau so dong
    for (int i=1;i<=n;i++){
        //in ra khoang trang tuoc
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //in ra dau *
        int u;
        if(i==1){
            u=i;
        }
		else {
            u=1+(i-1)*2;
        }
        for(int k=1;k<=u;k++){
            cout<<"*";
        }
        //in ra khoang trang sau
        for(int l=1;l<=n-i;l++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}
        
        
        
        
