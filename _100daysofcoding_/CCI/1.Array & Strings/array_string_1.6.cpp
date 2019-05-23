// Compress string like "aabbbcaaaa" to a2b3c1a4

#include<iostream>
#include<string>
#include <sstream>
using namespace std;

string compress(string str){
	string ans="";
	char counter;
	int count =0;
	string count_str;
	for(int i=0; i<str.size();i++){
		if(i==0){
			counter = str[i];
			count++;
			continue;
		}
		if (str[i]==counter)
			count++;
			
		if ((i==str.size()-1) or str[i]!=counter){
			stringstream ss;
			ss << count;
			count_str = ss.str();
			ans+=counter+count_str;
			count=1;
			counter=str[i];
		}
	}
	return ans;
}

int main(){
	string str;
	getline(cin,str);
	
	string new_str = compress(str);
	if(new_str.size()<str.size()){
		cout<<new_str<<endl;
	}
	else{
		cout<<str<<endl;
	}
	return 1;
}
