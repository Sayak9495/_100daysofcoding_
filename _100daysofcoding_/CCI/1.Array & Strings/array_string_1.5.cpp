// Allowed actions - Insert Remove, Replace. Given two strings check if they are one edit away.
// Input - pale, pae -> True
// 		  pale bake -> False
// 		  pale bale -> True

#include<iostream>
#include<string>

using namespace std;

string if_one_away(string str1, string str2){
	
	int size1 = str1.size();
	int size2 = str2.size();
	if (size1>size2){
		if(size1-size2>1)
			return "False";
	}
	else{
		string temp = str2;
		str2 = str1;
		str1 = temp;
		if(size2-size1>1)
			return "False";
	}
	if(size2>size1){
		int temp = size2;
		size2 = size1;
		size1 = temp;
	}
	
	int count=0;
	int j=0;
	for(int i=0; i<size1; i++){
		if (str1[i]==str2[j]){
			j++;
		}
		else{
			if (size1-size2==1)
				count++;
			else{
				j++;
				count++;
			}
				
		}
	}
	if (count>1)
		return "False";
	return "True";
	
	
}

int main(){
	string str1,str2;
	getline(cin, str1);
	getline(cin, str2);
	
	cout<<if_one_away(str1,str2);
	return 0;
}
