//Sum Lists: You have two numbers represented by a linked list, where each node contains a single
//digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
//function that adds the two numbers and returns the sum as a linked list.

// EX (7 -> 1 -> 6) + (5 -> 9 -> 2) = 617+295 = 912 = 2 -> 1 -> 9

#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
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

node* create_list_from_int(int int_x){
	node* list;
	list = NULL;
	
	while (int_x){
		node* temp = new node();

		int temp1 = int_x%10;
		int_x = int_x/10;
		(*temp).data = temp1;


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
		cout<<(*root).data<<" -> ";
		root = (*root).next;
	}
	cout<<(*root).data<<endl<<endl;
}

string list_to_string(node* root){
	string list_str="";
	while((*root).next!=NULL){
		stringstream ss;
		ss << (*root).data;
		list_str+=ss.str(); 
		root = (*root).next;
	}
	stringstream ss;
	ss << (*root).data;;
	list_str+=ss.str();
	return list_str;
}

string reverse_str(string str){
	string rev_str="";
	for(int i=str.size()-1;i>=0;i--){
		rev_str+=str[i];
	}
	return (rev_str);
}

int main(){
	node* list = create_list();
	string list_str = list_to_string(list);
	int rev_str = atoi(reverse_str(list_str).c_str());

	node* list1 = create_list();
	list_str = list_to_string(list1);
	int rev_str1 = atoi(reverse_str(list_str).c_str());
	
	int ans = rev_str+rev_str1;
	cout<<ans<<endl;
	list = create_list_from_int(ans);
	show_list(list);
	return 1;
}
