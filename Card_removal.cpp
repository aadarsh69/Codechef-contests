#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cd;
        cin>>cd;
        vector<int> h(cd);
        for(int j=0;j<cd;j++){
            cin>>h[j];
        }
        for(int i=0;i<cd;i++){
            if(h[i]=h[i+1]){
                cout<<0<<endl;
            }
            else{
                
            }
        }
    }
}