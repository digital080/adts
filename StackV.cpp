#include "StackV.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>

using namespace std;





int Stack::size(){

  return data.size();
}

int Stack::top(){
	int track = 0;
	
	if(data.size() <= 0){
		cout << "Stack is empty!" << endl;
		
		return -1;
		
		}else{
				for(int x = 0; x < data.size(); x++){
				track++;
			}
			cout << data[track] << endl;
			return 0; 
			
			}
		
	}

void Stack::push(int k){
 
	  data.push_back(k);

  }//end block


void Stack::pop(){

	
	if(data.size() > 0){
		data.pop_back();
		
	}else{
		
		cout << "Stack is emtpy!" << endl;
		
	}
  
  }

void Stack::clear(){
  int loc = 1;
  
  while(loc != data.size()){
		data.pop_back();
    loc++;
  }
}


	


