#include <bits/stdc++.h>
using namespace std; 
	string s;
int chk(){
	for(int i=0;i<s.size();i++){
		if(s[i]=='l'){
			for(int j=i+1;j<s.size();j++){
				if(s[j]=='o'){
					for(int k=j+1;k<s.size();k++){
						if(s[k]=='v'){
							for(int l=k+1;l<s.size();l++){
								if(s[l]=='e') 
								return 1;
							} 
							return 0;
						} 
						
					}
					return 0;
				}
			} 
			return 0;
		}
		
	}
				return 0;
}
int main() {
	cin>>s;  
	if(chk())cout<<"I love you, too!"<<endl; 
	else cout<<"Let us breakup!"<<endl;
	return 0;
}
