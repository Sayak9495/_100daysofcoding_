//Implement algo to determine if a string has all unique chars.

#include<iostream>
#include<string>
#include<iterator>
#include<map>
using namespace std;

bool if_unique(string str){
	for(int i=0; i<str.size(); i++){
		for(int j=0;j<i;j++){
			if (str[j]==str[i]){
				cout<<"Not Unique"<<endl;
				return 0;
			}
		}
	}
	cout<<"Unique"<<endl;
	return 1;
}

bool if_unique1(string str){
	
	map<char, int> dict;
	int i;
	for(i=0; i<str.size();i++){
		if (dict[str[i]]){
			dict[str[i]]=++dict[str[i]];
			cout<<"Not Unique"<<endl;
			return 0;
		}
		else{
			dict[str[i]]=1;
		}
	}
	/*	
	map<char, int>::iterator itr;
	for(itr = dict.begin(); itr!=dict.end(); itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	*/
	cout<<"Unique"<<endl;
	return 1;
}

int main(){
	string str;
	getline(cin,str);
	
	if_unique(str);
	if_unique1(str);
	return 0;
}
