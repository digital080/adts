#include "StackV.h"
#include <iostream>
#include <vector>
#include <stack>

using namespace std;


void Stack::push(int k){
  
  for(int x = 0; x < k; x++){
  data[x].push(k);
    }
  }



int Stack::size(){

  return num_elements;
}


void Stack::pop(){
  int x = 0;
  
  while(x < data.size()){//increment x to the last element in the list
  x++
   }
  
  data[x].pop();

  }

void Stack::clear(){
  int loc = 0;
  while(loc != data.size()){
    pop(1);
    loc++;
  }
}

void Stack::top(){
  for(int x = 0; x < data.size(); x++){
    
    cout << data[x] << endl;
  
  
  }

}
