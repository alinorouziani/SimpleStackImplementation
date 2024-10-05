#include<iostream>
#define n 5
using namespace std;
class stack{
public:
	stack();
	int empty();
	int full();
	void push(int x);
	int pop();
	void print();
	int tops();
private:
	int top;
	int items[n];
};
stack::stack(){
	top= -1;
}
int stack::empty(){
	if(top==-1)
		return 1;
	return 0;
}
int stack::full(){
	if(top==n-1)
		return 1;
	return 0;
}
void stack::push(int x){
	if (full()){
		cout << "The Stack is full.";
		exit(1);
	}
	else
		items[++top]=x;
}
int stack::pop(){
	if(empty()){
		cout<<"The Stack is empty.";
		exit(1);
	}
	else
	return items[top--];
}
int stack::tops(){
	if(top != -1){
		return items[top++];
}
	cout << "The Stack is empty." << endl;
	    return -1;
}
void stack::print(){
	if (top == -1){
		cout << "The Stack is empty.";
	}
	else
		for(int i = 0; i<top+1; i++){
		cout << items[i] << endl;
	}
}
int main(){
	stack s;
	int x;
	bool t = true;
	while(t){
		string ans;
		cout << "Do you want to (push, pop, unpop, full, empty, print, end)? ";
		cin >> ans;
		if (ans == "push"){
			cout << "enter a number: ";
			cin >> x;
			s.push(x);
		}
		else if (ans == "pop"){
			s.pop();
	}
		else if(ans == "unpop"){
			s.tops();
		}
		else if(ans == "print"){
			s.print();
		}
		else if(ans=="empty"){
			if(s.empty()){
				cout << "it's empty." <<endl;
			}
			else
				cout<<"it's not empty." << endl;
		}
		else if(ans=="full"){
			if(s.full()){
				cout << "it's full." << endl;
			}
			else
				cout << "it's not full" <<endl;
			}
		else if(ans == "end"){
			t = false;
		}
		else{
			cout<<"Unknown command! Try again"<<endl;
		}
	}
}
