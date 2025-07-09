//https://toph.co/arena?practice=686e1629c70f69487d462992#!/standings/p1

//Code: wa at 29 test
//concept: remove the elements of array with (maximum frequencies prime factor numbr first (minimum prime factor if many max))
//same thing again
//rest array size print

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll t,n,i,p,q,val1,val2,ans;

int main() {

		cin>>n;

		ll a[n+5];

		for(i=0;i<n;i++){
			cin>>a[i];
		}

		ll one=0;
		for(i=0;i<n;i++){if(a[i]==1){one++;}} //handling one

		if(one==n){
			cout<<n<<endl;
			cout<<2<<" "<<3<<endl; return 0;
		}

		map<ll,ll>mp;
	   

		//prime factorization

		for(i=0;i<n;i++){

			p=a[i];

			if(p==1){}
			else{
			set<ll>st;
		    while (p%2 == 0){
			  st.insert(2);
		      p = p/2;
		   }
		   for (ll ii = 3; ii <= sqrt(p); ii = ii+2){
			   
		      while (p%ii == 0){
		          st.insert(ii);
		         p = p/ii;
		      }
		   }
		   if (p > 2){
			  st.insert(p);
			   //cout<<"nn:"<<p<<endl;
		   }
		   vector<ll>vv(st.begin(),st.end());

		   for(ll j=0;j<vv.size();j++){ mp[vv[j]]++; }

			}
		   
		}

		ll k=0; p=-1;
		
		for(auto x:mp){

			//cout<<x.first<<": "<<x.second<<endl;
			
			if(x.second>k && x.first!=0){
				k=x.second; 
				p=x.first;
			}
		}
		
		ll val1=p;

		vector<ll>v;

		for(i=0;i<n;i++){
			
			if(a[i]%val1==0){
				
			}
			else{
				v.push_back(a[i]);
			}
		}

		if(v.size()==0){

			if(val1==2){
				val2=3;
			}else{
				val2=val1-1;
			}
			
			cout<<0<<endl;

			cout<<val1<<" "<<val2<<endl; 

			return 0;
		}

		map<ll,ll>mp2;

		//cout<<v.size()<<endl;

		for(i=0;i<v.size();i++){

			p=v[i];

			//cout<<p<<" ";

			if(p==1){}
			else{
			set<ll>st;
		    while (p%2 == 0){
			  st.insert(2);
		      p = p/2;
		   }
		   for (ll ii = 3; ii <= sqrt(p); ii = ii+2){
			   
		      while (p%ii == 0){
		          st.insert(ii);
		         p = p/ii;
		      }
		   }
		   if (p > 2){
			  st.insert(p);
			   //cout<<"nn2:"<<p<<endl;
		   }
		   vector<ll>vv(st.begin(),st.end());

		   for(ll j=0;j<vv.size();j++){ mp2[vv[j]]++; }
		   st.clear();
				
			}
		   
		} //cout<<endl;

		k=0; q=-1;
		
		for(auto x:mp2){
			//cout<<x.first<<": "<<x.second<<endl;
			if(x.second>k && x.first!=0){
				k=x.second; 
				q=x.first;
			}
		}

		ll val2=q;

		if( (v.size()==one) && val2==-1){

			cout<<v.size()<<endl;
			
			if(val1==2){
				val2=3;
			}else{
				val2=val1-1;
			}
			cout<<val1<<" "<<val2<<endl;  return 0;
		}

		vector<ll>v2;

		for(i=0;i<v.size();i++){
			
			if(v[i]%val2==0){
				
			}
			else{
				v2.push_back(v[i]);
			}
		}


	
		ans=v2.size();

		cout<<ans<<endl;

		cout<<val1<<" "<<val2<<endl;
		
	
	return 0;
}


