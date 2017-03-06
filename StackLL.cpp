#include "StackLL.h"
#include <iostream>


using namespace std;



void Stack::push(int k){
	Node* newPtr = new Node(k);
	Node* prevPtr = nullptr;
	
	if(k == 1){
		newPtr -> link = frontPtr;
		frontPtr = newPtr;
		}else {
			prevPtr -> link = frontPtr;
			}
	
	for(int x = 1; x != k-1; x++){
			prevPtr = prevPtr -> link;
		}
		
		newPtr -> link = prevPtr -> link;
		prevPtr -> link = newPtr;
		
		num_elements++;
	}
	
int Stack::size(){
	return num_elements;
	}
	
		
void Stack::pop(){
	Node* delPtr = nullptr;
	int data = 0;
	Node* prevPtr = nullptr;
	
	if(num_elements == 1){
			delPtr -> link = frontPtr;
			frontPtr = delPtr;
		}else{
			prevPtr -> link = frontPtr;
		
		}
	
	
	for(int x = 0; x < num_elements; x++){
			prevPtr = prevPtr -> link;
		}
		
			delPtr = prevPtr -> link;
			prevPtr -> link = delPtr -> link;
	
		data = delPtr -> data;
		delete delPtr;
		
	}


	
int Stack::top(){
	Node* trackPtr = frontPtr;
	
	for(Node* currPtr = frontPtr; currPtr != nullptr; currPtr = currPtr -> link){
		trackPtr = trackPtr -> link;
		
		}
		cout << trackPtr -> data << endl;
	
	}

void Stack::clear(){
	while(num_elements != 0){
		int x = pop(1);
		
		num_elements--;
		}
	
	
	}
