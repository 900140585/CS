#include "linear_list.h"

int main()
{
linear_list list;
list.insert(50); list.insert(15); list.insert(125); list.insert(3); list.insert(2); 
list.insert(9);list.insert(25);list.insert(25);list.insert(22); 
T e;
bool z;
z=list.first(e);
while(z)
{ 
    cout<<e<<endl;
    z=list.Next(e);
}

}