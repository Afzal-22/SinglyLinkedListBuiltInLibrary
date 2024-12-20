#include<iostream>
#include"LinkedList.h"
using namespace std;

//Demo Class for using data for LinkedList
class Movie{
public:
	string name;
	float rating;
	Movie(string name, float rating){
		this->name = name;
		this->rating = rating;
	}
	void show(){
		cout<<"Movie Name: "<<name<<", "<<"Rating: "<<rating<<endl;
	}
};


int main(){

	//Linked List of int
	LinkedList<int>myList;
	myList.insertAtLast(10);
	myList.insertAtLast(16);
	myList.insertAtLast(17);
	myList.insertAtLast(14);
	myList.insertAtLast(11);
	myList.insertAt(2,23);
	myList.deleteLast();

	for(Iterator<int> it = myList.begin(); it!=myList.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	/* myList.reverseList();
	for(Iterator<int> iti = myList.begin(); iti!=myList.end(); iti++){
		cout<<*iti<<" ";
	}
	cout<<endl;
	//cout<<myList.findData(13);
	//myList.reverseList();
	//myList.sorting();
	LinkedList<int>myList1;
	myList1.insertAtLast(10);
	myList1.insertAtLast(1);
	myList1.insertAtLast(1);
	myList1.insertAtLast(14);
	myList1.insertAtLast(12);
    myList1.append(myList);
  /*  myList1.reverseList();
	for(Iterator<int> it = myList1.begin(); it!=myList1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	myList1.sorting();
	for(Iterator<int> it = myList1.begin(); it!=myList1.end(); it++){
		cout<<*it<<" ";
	}
	//cout<<myList.reverseList();
	/*for(Iterator<int> it = myList.begin(); it!=myList.end(); it++){
		*it = *it * *it;
	}

	for(Iterator<int> it = myList.begin(); it!=myList.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	//Linked List of String
	LinkedList<string> words;
	words.insertAtLast("One");
	words.insertAtLast("Two");
	words.insertAtLast("Three");
	words.insertAtLast("Four");

	for(Iterator<string> it = words.begin(); it!=words.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;


	//Linked List of Movies or User Defined Type
	LinkedList<Movie*> movies;
	movies.insertAtLast(new Movie("M1",5.5f));
	movies.insertAtLast(new Movie("M2",6.5f));
	movies.insertAtLast(new Movie("M3",7.5f));
	movies.insertAtLast(new Movie("M4",8.5f));
	movies.insertAtFirst(new Movie("M5",9.5f));

	for(Iterator<Movie*> it = movies.begin(); it!=movies.end(); it++){
		(*it)->show();
	}
	cout<<endl;
*/


return 0;
}





