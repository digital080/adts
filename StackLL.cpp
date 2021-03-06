#include "StackLL.h"
#include <iostream>


using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


void Stack::push(int k){
	Node* newPtr = new Node{k};
	Node* prevPtr = frontPtr;
	
	if(num_elements == 0){
		newPtr -> link = frontPtr;
		frontPtr = newPtr;
		//num_elements++;
		}else {
			//prevPtr -> link = frontPtr;
			
	
	for(int x = 0; x < num_elements - 1; x++){//Stop at the element before the front of the stack
			prevPtr = prevPtr -> link;
			
		}
		
		newPtr -> link = prevPtr -> link;
		prevPtr -> link = newPtr;
		
		num_elements++;
		}
	}
	
int Stack::size(){
	return num_elements;
	}
	
		
void Stack::pop(){
	Node* delPtr = frontPtr;
	int data2 = 0;
	Node* prevPtr = frontPtr;
	
	if(num_elements > 0){
			//delPtr -> link = frontPtr;
			//frontPtr = delPtr;
			//prevPtr = frontPtr;//prevPtr points to frontPtr
		
		
	for(int x = 0; x < num_elements - 1; x++){//Make prevPtr point to 2nd last/front element
			prevPtr = prevPtr -> link;
		}
		
			delPtr = prevPtr -> link;//delPtr points to last/front of the stack
			//prevPtr -> link = delPtr -> link;
	
		data2 = delPtr -> data;
		delete delPtr;
		num_elements--;
		}
	}


	
int Stack::top(){
	Node* trackPtr = frontPtr;
	
	for(Node* currPtr = frontPtr; currPtr != nullptr; currPtr = currPtr -> link){
		trackPtr = trackPtr -> link;
		
		}
		cout << "Hello"<< endl;
		return trackPtr -> data;
	}

void Stack::clear(){
	while(num_elements != 0){
		pop();
		
		num_elements--;
		}
	
	
	}
	
Stack::~Stack()
{
    while(num_elements > 0)
      pop();
}
	
