#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,k,rej=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>-1){
        rej++;
    }
     if(rej>n/2){
        cout<<"rejected"<<endl;
    }
    else if(arr[i]>k){
        cout<<"Too slow"<<endl;
    }
    else if(arr[i]!=-1 && arr[i]>=1){
        cout<<"Bot"<<endl;
    }
    else{
        cout<<"accepted"<<endl;
    }

}
}


int main(){
int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}
