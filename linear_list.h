#include <iostream>
#include <assert.h>
using namespace std;
typedef int T;
#define MAX_SIZE 10
class linear_list
{
 private:
   T data[MAX_SIZE];    //linear list to store data
   int n,current;               // number of elemnts int list
 public:
  linear_list(){n=0;}
  void insert(T elem) ;         //insert function with input elem
  bool first(T &elem);
  bool Next(T &elm);

};