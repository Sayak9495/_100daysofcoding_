// check if given two string are permutation of each other

#include<iostream>
#include<string>
#include<map>
using namespace std;

string check_permutation(string str1,string str2){
	if(str1.size()!= str2.size()){
		return "Not a Permuatation";
	}
	map<char, int> m_str1;
	map<char, int> m_str2;
	for(int i=0;i<str1.size();i++){
		if(m_str1[str1[i]])
			m_str1[str1[i]]=++m_str1[str1[i]];
		else
			m_str1[str1[i]]=1;
		
		if(m_str2[str2[i]])
			m_str2[str2[i]]=++m_str2[str2[i]];
		else
			m_str2[str2[i]]=1;
	}
	if(m_str1==m_str2)
		return "Permutation";
	return "Not a Permutation";
}

int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	
	cout<<check_permutation(str1,str2);
}
