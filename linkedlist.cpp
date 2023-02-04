// #include <iostream>

// #include <queue>

// using namespace std;

 

// class Node{

//     public :

//     int data;

//     Node* next;

//     Node(int data){

//         this->data = data;

//         this->next = NULL;

//     }

// };

 

// int main() {

    

//     Node* head = NULL;

//     Node* temp = head;

//     while(true){

//         int x;

//         cin >> x;

        

//         if(x == -1){

//             break;

//         }

        

//         if(head == NULL){

//             head = new Node(x);

//             temp = head;

//         }

//         else{

//             temp->next = new Node(x);

//             temp = temp->next;

//         }

//     }

//     temp = head;

//     while(temp != NULL){

//         cout << temp->data << " -> ";

//         temp = temp->next;

//     }

//     cout << " NULL";

 

// }


// // reversing a linked list

// #include <iostream>

// using namespace std;

// class Node{

//   public :

//   int data;

//   Node* next;

//   Node(int data){

//       next = NULL;

//       this->data = data;

//   }

// };

 

// void print(Node* head){

//     while(head){

//         cout << head->data << " -> ";

//         head = head->next;

//     }

    

//     cout << " NULL" << endl;

    

// }

 

// int main() {

//    Node* head = NULL;

//    Node* pre = head;

   

//    while(true){

//        int x;

//        cin >> x;

//        if(x == -1){

//            break;

//        }

       

//        if(head == NULL){

//            head = new Node(x);

//            pre = head;

//        }

//        else{

//            pre->next = new Node(x);

//            pre = pre->next;

//        }

//    }

   

   

//    print(head);

   

//    Node* forv = NULL;

//    pre = NULL;

//    Node* curr = head;

//    while(curr != NULL){

//        forv = curr->next;

//        curr->next = pre;

//        pre = curr;

//        curr = forv;

//    }

   

//    head = pre;

//    print(head);

   

   

// }



//

// #include <iostream>
// using namespace std;
// class Node{
//   public :
//   int data;
//   Node* next;
//   Node(int data){
//       next = NULL;
//       this->data = data;
//   }
// }; int mid(Node* head){
//     int count = 0;
//     Node* temp = head;
//     while(temp){
//         count++;
//         temp = temp->next;
//     }
//     count = (count - 1) / 2;
//     temp = head;
//     while(count > 0){
//         temp = temp->next;
//         count--;
//     }
//     return temp->data;
// } int midSlowFast(Node* head){
//     Node* slow = head;
//     Node* fast = head->next;
//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow->data;
// } void reverse(Node* &head){
//    Node* forv = NULL;
//    Node* pre = NULL;
//    Node* curr = head;
//    while(curr != NULL){
//        forv = curr->next;
//        curr->next = pre;
//        pre = curr;
//        curr = forv;
//    }
//    head = pre;
// } void print(Node* head){
//     while(head){
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << " NULL" << endl;
// } int main() {
//    Node* head = NULL;
//    Node* pre = head;
//    while(true){
//        int x;
//        cin >> x;
//        if(x == -1){
//            break;
//        }
//        if(head == NULL){
//            head = new Node(x);
//            pre = head;
//        }
//        else{
//            pre->next = new Node(x);
//            pre = pre->next;
//        }
//    }
//    print(head);
//    cout << midSlowFast(head);
// }




// #include <iostream>

// using namespace std;

// struct  Node
// {   
//     int num;
//     Node *next;
//  }; 

//   int size = 0;
//   void insert(Node** head, int num){
//     Node* new_Node = new Node();
//     new_Node->num = num;
//     new_Node->next = *head;
//     *head = new_Node;    
//      size++;
// }

// Node* delete_last_node(Node* head, int n) {
//         Node *p = head, *q = head;
//         while (n--) q = q->next;
//         if (!q) return head->next;
//         while (q->next) {
//             p = p->next;
//             q = q->next;
//         }
//         Node* toDelete = p->next;
//         p->next = p->next->next;
//         delete toDelete;
//         return head;
// }

//   //Display all nodes
//   void display_all_nodes(Node* node)
//     { 
//       while(node!=NULL){
//         cout << node->num << " "; 
//         node = node->next; 
//     } 
// }

// int main()
// {
//     Node* head = NULL;
//     insert(&head,1);
//     insert(&head,3);
//     insert(&head,5);
//     insert(&head,7);
//     cout << "Original list:\n";
//     display_all_nodes(head); 
//     int pos = 2;
//     cout << "\n\nRemove the " << pos << "nd node from the end of the said list:";
//     cout << "\nUpdated list:\n";
//     head = delete_last_node(head, pos);
//     display_all_nodes(head); 
//     pos = 3;
//     cout << "\n\nRemove the " << pos << "rd node from the end of the said list:";
//     cout << "\nUpdated list:\n";
//     head = delete_last_node(head, pos);
//     display_all_nodes(head); 
//     cout<<endl;
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
  int data;
  Node(int d){
  data=d;
  }
   Node *ptr;


};

bool ispalindrom(Node* head){

  Node* slow=head;

  stack<int> z;
  while (slow !=NULL){
    z.push(slow->data);
    slow=slow->ptr;

  }
  
  while(head != NULL){
    int i=z.top();
    z.pop();

    if(head -> data !=i){
      return false;
    }
    else{
      head=head->ptr;
    }
    return true;
  }
  
}
int main(){
  Node one = Node(1);
  Node two = Node(2);
  Node three = Node(2);
  Node four = Node(1);
  



four.ptr=NULL;
one.ptr=&two;
two.ptr=&three;
three.ptr=&four;


Node* temp=&one;

int res= ispalindrom(&one);

if(res==1){
  cout<<" This is plaindrom"<<endl;
}
else{
  cout<<" This is not a plaindrom"<< endl;

}
return 0;

}