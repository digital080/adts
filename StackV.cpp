#include "StackV.h"
#include <iostream>
#include <vector>
#include <stack>

using namespace std;





int Stack::size(){

  return data.size();
}

int Stack::top(){
	if(data.size() == 0){
		cout << "Stack is empty!" << endl;
		
		return -1;
		}
	}

void Stack::push(int k){
int w = data.size();
  
  if (first == k){
	  
	  first++;
	  data[first] = k;
	  }else {
  
  for(int x = 0; x < data.size(); x++){
	  
			first++;
		}//endfor
	}//endif
  }//end block


void Stack::pop(){
	//if(top > 0){
	
  first--;
	/*}else{
	//	cout << "Stack is emtpy!" << endl;
	}*/
  
  }

void Stack::clear(){
  int loc = 0;
  while(loc != data.size()){
   // data[0].pop();
    loc++;
  }
}


	


