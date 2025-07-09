#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    if(a>b && a-b>1){
        cout<<-1<<endl;
        return;
    }
    if(a>b && a-b==1){
        if(a%2==0){
          cout<<-1<<endl;
        }
        else{
            cout<<y<<endl;
        }
        return;
    }
    if(x<y){
        cout<<x*(b-a)<<endl;
        return;
    }
    else{
        int ans=0;
        for(int i=a;i<b;i++){
            if(i%2==0){
             ans+=y;
            }
            else{
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}