//https://toph.co/arena?contest=2cbypdx#!/p/63ee1414250542412e9aa7ff

//code:


#include <bits/stdc++.h>
using namespace std;
#define ll    long long int

ll n,i,ans,q,p,a,b,c,d;

void solve() {

    cin>>p>>q>>a>>b>>c>>d;

    ll x=pow(a,b);
    ll y=pow(c,d);

    //cout<<x<<" "<<y<<endl;;

    ll sum=(x*p)+(q*a*y);
    ll p=-1;


    for(i=2;i<=sqrtl(sum);i++){
        if(sum%i==0){p=i; break;}
    }

    if(p==-1){
        ans=powl(a,b-1)*p+q*y;
        cout<<a<<" "<<ans<<endl;
    }
    else{ cout<<p<<" "<<sum/p<<endl;}

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
 
    cin>>t;
 
    while(t--){
        //cs++;
        //cout<<"Case "<<cs<<": ";
        solve();
    }
 
    return 0;
}
