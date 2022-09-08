#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int nn;
        cin>>nn;
        int bb=1;
        for(int i=2;i<nn;i++){
            if(i%2==0){
                bb=bb^i;
            }
            else{
                bb=bb&i;
            }
        }
        
    }
}