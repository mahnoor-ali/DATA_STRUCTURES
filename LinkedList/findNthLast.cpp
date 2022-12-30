//1. NAIVE APPROACH

//time complexity: O(n)
//space complexity: O(1)
//this solution is not efficient because it traverses the list twice

int printNthFromLast(Node* head, int N)
{
    int len = 0, i;
    Node* temp = head;
 
    // Count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
 
    // Check if value of N is not
    // more than length of the linked list
    if (len < N)
        return;
    temp = head;
 
    // Get the (len-N+1)th node from the beginning
    for (i = 1; i < len - N + 1; i++)
        temp = temp->next;
   cout << temp->data;
   return temp->data;
}


//-----------------------------------------------------------

//2. TWO POINTER APPROACH

//time complexity: O(n)
//space complexity: O(1)
//this solution is better than the previous one because it only traverses the list once

Node* findNthLast(Node* head, int n)
{
    Node* p = head;
    Node* q = head;
    for (int i = 0; i < n; i++)
    {
        if (q == NULL)
        {
            return NULL; // n is larger than the size of the list
        }
        q = q->next;
    }
    while (q != NULL)
    {
        p = p->next;
        q = q->next;
    }
    return p;
}