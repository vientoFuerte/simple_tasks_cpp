/*******************************************************************************/
/* Посчитайте количество единиц в произвольном числе.                          */
/*******************************************************************************/

#include <iostream>
#include <algorithm>
int main()
{
    int a = 109411;
    
    std::string str = std::to_string(a);
    
    int count_ones = std::count(str.begin(), str.end(), '1');
    
    std::cout<< count_ones<<std::endl;
    

    return 0;
}


/*******************************************************************************/
/* Есть структура по типу «односвязный список». Напишите функцию, которая      */
/* разворачивает список. То есть, первый элемент становится последним, а последний - первым. */
/*******************************************************************************/

#include <iostream>

struct Node{
   int data;
   Node * next;
    
  Node(int a) : data {a}, next{nullptr} { };
    
};


Node *  Invert(Node * head)
{
    Node * prev = nullptr; 
    Node * curr = head; 
    Node * next = nullptr; 
    
    
    while(curr != nullptr)
    {
        next = curr->next;
        
        curr->next = prev;
        
        prev = curr;

        curr = next;
        
    }

   return prev; 
}

int main()
{
    Node * head = new Node(1);
    
    head->next = new Node(2);
    
    head->next->next = new Node (3);
    
    head->next->next->next = new Node (4);
    
    head->next->next->next->next = new Node (5);
    
    Node * ptr = head;
    
    while (ptr != nullptr)
    {
        std::cout<< ptr->data<<std::endl;
        
        ptr = ptr->next;
        
    }
    
    ptr = Invert(head);
    
    while (ptr != nullptr)
    {
        std::cout<< ptr->data<<std::endl;
        
        ptr = ptr->next;
        
    }
    
    
    return 0;
}
