//https://toph.co/p/shine-on-you-crazy-diamond

// The code gives runtime error on test 9 because the case for 1 is not considered
//ex: array with value '1'
code:


#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ll long long int

ll n,t,i,j,q,p,ans,ans2;




void solve(){
    
    cin>>n;
    
    ll a[n+5];
    
   for(i=0;i<n;i++){
       
       cin>>a[i];
       
   }
   
   map<ll,ll>mp;
   
   for(j=0;j<n;j++){
       
       p=a[j];
       
       
        while(p%2==0){
            
            mp[2]++;    if(p!=2){mp[p/2]++;}
            
            p=p/2;
            
        }
        
        for(i=3; i<=sqrt(p); i+=2){
            
            while(p%i==0){
                
                mp[i]++;    mp[p/i]++;
                
                p=p/i;
            }
            
        }
        
        if(p>2) { mp[p]++; }
       
   }
   
   
   ll mx1=2;
    
   for(auto x:mp){
       
       mx1=max(mx1,x.second);
       
   }
   
    for(auto x:mp){
       
       if(x.second==mx1){ans=x.first;}
       
   }
   
   ll mx2=1;
   
   for(auto x:mp){
       
       if(x.first!=ans){ mx2=max(mx2,x.second); }
       
   }
   
   for(auto x:mp){
       
       if(x.second==mx2 && x.first!=ans){ ans2=x.first; }
       
   }
   
   ll cnt=0;
    
    
    for(i=0;i<n;i++){
        
        
        if(a[i]%ans==0 && a[i]%ans2==0){
            
            cnt++;
            
        }
        else if(a[i]%ans==0){
            
            cnt++;
            
        }
        else if(a[i]%ans2==0){
            
            cnt++;
            
        }
    }
    
    cout<<n-cnt<<endl;
    
    if(ans==ans2){ans2++;}
    
    cout<<min(ans,ans2)<<" "<<max(ans,ans2)<<endl;
    
}



int main(){
    
ios::sync_with_stdio(false);
cin.tie(0);


    //cin>>t;
    
    t=1;
    
    while(t--){
        
        solve();
        
    }
    
    return 0;
    
}
