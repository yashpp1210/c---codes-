//Q---> this is the question where you have given the test cases and then three numbers 
//     you have to check whether the one of the number can be addition of two if yes then print yes if no then print no


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        bool sum=false;
        cin>>x>>y>>z;
        if(x==y+z || y==z+x ||z==y+x){
            sum=true;
        }
        else {
            sum=false;
        }
        if(sum==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
        }
return 0;}
