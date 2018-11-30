#include "linear_list.h"
bool linear_list::first(T &elm)
 {
     if(n==0)return false ;
     current =0;
     elm=data[0];
     return true;
 }

 bool linear_list::Next(T &elm)
  {
      if(n==0 || (++current==n)) return false;
      elm=data[current];
      return true;
  }


  void linear_list::insert(T elem)          //insert function with input elem
 {
   if(n==MAX_SIZE) {cout<<"list FULL";return;}
    data[n]=elem;
    n++;
 }