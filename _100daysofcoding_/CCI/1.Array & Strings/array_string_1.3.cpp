//replace string spaces with %20 
//input: "Mr Sayak Sen   ",12
//output: "Mr%20Sayak%20Sen"

#include<iostream>
#include<string>
using namespace std;

string urlify(string str,int x){
	string ans="";
	for(int i=0;i<x;i++){
		if (str[i]==' ')
			ans+="%20";
		else
			ans+=str[i];
	}
	return ans;
}


string urlify_inplace(string str,int x){
	string temp = str;
	for(int i=0;i<str.size();i++){
		if (str[i]==' '){
			for(int j=i+3;j<str.size();j++){
				str[j]=temp[j-2];
			}
			temp=str;
			str[i]='%';
			str[i+1]='2';
			str[i+2]='0';
		}
	}
	return str;
}


int main(){
	string str;
	int x;
	getline(cin, str);
	cin>>x;
	cout<<urlify(str,x)<<endl;
	cout<<urlify_inplace(str,x);
}
