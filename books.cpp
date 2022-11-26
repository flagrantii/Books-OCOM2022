#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	vector<int> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	
	int m,x;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		cout<<s[x-1]<<"\n";
		s.erase(s.begin()+(x-1));
	}
}
