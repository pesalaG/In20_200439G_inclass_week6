#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void Push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void Pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"popped element "<< top->data <<endl;
      top = top->next;
   }
}
void Display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"stack elements: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}



int main() {
   cout << "Stack using linked lists"<<endl;
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