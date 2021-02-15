#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
int t;
cin>>t;
while(t--){
    string s={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};


    int n,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<temp;j++){
            cout<<"_";
        }
        for(int j=0;j<n-temp;j++){
            cout<<s[j];
            cout<<"\n";
            temp++;
        }
    }

}

	return 0;
}
