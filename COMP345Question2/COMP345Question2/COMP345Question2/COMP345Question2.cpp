
#include "stdafx.h"
#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
};

class List {
private:
	Node *head, *tail;
public:
	friend ostream& operator<<(ostream &out, const List &l);
	friend istream& operator>>(istream &input, const List &l);
	friend const List operator+(List &a, List &b);
	List() {
		head = NULL;
		tail = NULL;
	}
	void createnode(int value) {
		Node *temp = new Node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}
	void display() {
		Node *temp = new Node;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}
	void insert_start(int value) {
		Node *temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}
	void insert_position(int pos, int value) {
		Node *pre = new Node;
		Node *cur = new Node;
		Node *temp = new Node;
		cur = head;
		for (int i = 1; i<pos; i++) {
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}
	void delete_first() {
		Node *temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
	}
	void delete_last() {
		Node *current = new Node;
		Node *previous = new Node;
		current = head;
		while (current->next != NULL) {
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}
	void delete_position(int pos) {
		Node *current = new Node;
		Node *previous = new Node;
		current = head;
		for (int i = 1; i<pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete current;
	}

};
ostream& operator<<(ostream &output, const List &l) {
	Node *temp = new Node;
	temp = l.head;
	while (temp != NULL) {
		output << temp->data << "\t";
		temp = temp->next;
	}
	return output;
}
istream& operator>>(istream &input, List &l) {
	int a;
	Node *temp = new Node;
	input >> a;
	l.createnode(a);
	return input;
}
const List operator+(List &a, List &b) {

}
int main() {
	List obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Displaying All nodes---------------";
	cout << "\n--------------------------------------------------\n";
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Inserting At End-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "----------------Inserting At Start----------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_start(50);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "-------------Inserting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_position(5, 60);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "----------------Deleting At Start-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Deleting At End-------------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "--------------Deleting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_position(4);
	obj.display();

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using answer code-----------------";
	cout << "\n--------------------------------------------------\n";

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using copy constructor-----------------";
	cout << "\n--------------------------------------------------\n";
	List obj1(obj);
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using assignment operator-----------------";
	cout << "\n--------------------------------------------------\n";
	List obj2;
	obj2 = obj1;
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using stream input------------------";
	cout << "\n--------------------------------------------------\n";
	cin >> obj1 >> obj1;
	cout << obj1 << endl;

	cout << "\n--------------------------------------------------\n";
	cout << "--------------Using operator+------------------";
	cout << "\n--------------------------------------------------\n";
	List obj3, obj4;
	obj3.createnode(1);
	obj3.createnode(2);
	obj3.createnode(3);
	obj3.createnode(3);
	obj4.createnode(4);
	obj4.createnode(5);
	obj4.createnode(6);
	cout << "obj3 List: " << endl << obj3 << endl;
	cout << "obj4 List: " << endl << obj4 << endl;
	cout << "obj3 + obj4: " << endl << obj3 + obj4 << endl;
	int x; cin >> x;
	return 0;
}