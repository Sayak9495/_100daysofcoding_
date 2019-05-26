// check if a linked list is a palindrome

#include<iostream>
#include<string>
using namespace std;

struct node{
	int data;
	node *next;
};

node* create_list(){
	int x;
	cin>>x;
	
	node* list;
	list = NULL;
	
	while (x--){
		node* temp = new node();
		cin>>(*temp).data;
		if (list==NULL){
			list=temp;
		}
		else{
			node* temp_ = list;
			while((*temp_).next!=NULL){
				temp_ = (*temp_).next; 
			}
			(*temp_).next = temp;
		}
	}
	return list;
}

void show_list(node* root){
	cout<<"-----------"<<endl;
	while((*root).next!=NULL){
		cout<<(*root).data<<endl;
		root = (*root).next;
	}
	cout<<(*root).data<<endl<<endl;
}

string list_to_string(node* root){
	string list_str="";
	while((*root).next!=NULL){
		list_str+=(*root).data; //Anyone reading this code please let me know if this code will fail any test case. p.s Im not coverting int to char correctly (int to char can be done as intended using sstream used in arra_string1.6.cpp)
		root = (*root).next;
	}
	list_str+=(*root).data;
	return list_str;
}

string check_palindrome(string str){
	string rev_str="";
	for(int i=str.size()-1;i>=0;i--){
		rev_str+=str[i];
	}
	cout<<str<<"--"<<rev_str<<endl;
	if(str==rev_str)
		return "Palindrome";
	return "Not Palindrome";
}

int main(){
	node* list = create_list();
	show_list(list);
	string list_str = list_to_string(list);
	cout<<check_palindrome(list_str);
	return 1;
}
