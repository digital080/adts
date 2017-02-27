#include "StackL.h"
#include <iostream>

using namespace std;


void Stack::push(int k){
  Node* frontPtr = nullPtr;
  Node* newPtr = new Node(k);
  newPtr -> link = frontPtr;
  frontPtr = newptr;
  }

void Stack::pop(){
  int delData = 0;
  
  //delData = //save data
            //remove ptr
            //link data back to list
}
