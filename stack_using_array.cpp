#include <iostream>
using namespace std;
#include <chrono>
using namespace std::chrono;


//intialising stack using an array
int stack[500], n=500, top_pointer=-1;

void Push(int val) {
   if(top_pointer>=n-1)
   {cout<<"Stack Overflow"<<endl;}
   else
   {
      top_pointer++;
      stack[top_pointer]=val;
   }
}
int Pop() {
   if(top_pointer<=-1)
   {cout<<"Stack Underflow"<<endl;}
   else {
      cout<<"popped element "<< stack[top_pointer] <<endl;
      top_pointer--;
      return stack[top_pointer +1];
   }
}
void Display(){
    cout<< "stack elements ";
    for(int i=0; i<top_pointer+1 ; i++)
    {cout<< stack[i] <<' ';}
    cout<<endl;
}
bool isEmpty(){
    if(top_pointer<=-1){return true;}
    else{return false;}
}
bool isFull(){
    if(top_pointer>=n-1){return true;}
    else{return false;}
}

int stackTop(){
    return stack[top_pointer];
}

int main() {
  
   cout << "Stack using arrays"<<endl;
   clock_t start, end;
   double time_spent;   
    
    start = clock();
    
    Push(8);
    Push(10);
    Push(5);
    Push(11);
    Push(15);
    Push(23);
    Push(6);
    Push(18);
    Push(20);
    Push(17);
    Display();
    Pop() ;
    Pop() ;
    Pop() ;
    Pop() ;
    Pop() ;
    Display();
    Push(4);
    Push(30);
    Push(3);
    Push(1);
    Display();
    
   end = clock();
   time_spent = (double)(end - start) / (double)CLOCKS_PER_SEC;
   cout << "Time taken is " << time_spent*1000 << " milliseconds" << endl;

    return 0;
}