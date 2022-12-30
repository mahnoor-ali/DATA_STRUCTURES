#include <iostream>

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != nullptr)
    {
        std::cout << "Element: " << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
Node * deleteFirst(Node * head){
    Node * ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
Node * deleteAtIndex(Node * head, int index){
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    delete q;
    return head;
}

// Case 3: Deleting the last element
Node * deleteAtLast(Node * head){
    Node *p = head;
    Node *q = head->next;
    while(q->next != nullptr)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = nullptr;
    delete q;
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
Node * deleteByValue(Node * head, int value){
    Node *p = head;
    Node *q = head->next;
    while(q->data!=value && q->next!= nullptr)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        delete q;
    }
    return head;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = nullptr;

    std::cout << "Linked list before deletion" << std::endl;
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);
    std::cout << "Linked list after deletion" << std::endl;
    linkedListTraversal(head);

return 0;
}