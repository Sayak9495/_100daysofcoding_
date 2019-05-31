//:Assumeyou have a method isSubstringwhich checks if oneword is a substring
//of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
//call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat"). 

#include<iostream>
#include<string>
#include<map>
using namespace std;

bool string_rotation(string str1, string str2){
	if(str1.size()!=str2.size()){
		return false;
	}
	str1+=str1;
	int siz = str1.size()*2;
	if (str1.find(str2)<=siz){
		return true;
	}
	return false;
}

int main(){
	string str1,str2;
	cout<<"Enter 2 string to check if 2nd is rotation of 1st string\n";
	cin>>str1>>str2;
	
	cout<<string_rotation(str1,str2)<<endl;
	
	return 1;
}
