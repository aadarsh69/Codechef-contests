#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=0;j<n;j++){
                a[i]=a[i]^a[j];
            }
        }
        while(parity(a[i]&a[i+1])!=parity(a[i]|a[i+1])){
            
        }
        
    }
}