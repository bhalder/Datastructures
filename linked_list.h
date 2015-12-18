#define LINKEDLIST_H

typedef struct node_t {
    int data;
    struct node_t * next;
} * node;


// Create a node 
node * create_node( int data );

// Add Node
void insert_last( node * head, node * new_node);

// Delete Node
void delete_node( node* head, int position );

// Walk List
void walk_list (node * head ) ;

// Insert Front
// Push
void push( node * head, node * new_node );

// Insert Rear
void insert_last( node * head, node * new_node );

// delete last node 
void delete_last( node * head);
// Delete List
void delete_list( node * head);

// Find Loop

int find_loop( node * head );

// Find Mid
node * find_loop( node * head );

// Linked List in Reverse Order

// Remove Duplicates from the List

// Reverse a Linked List using Recurstion

// Reverse everty k nodes of a linked list
// Example : 1-2-3-4-5-6; k = 2; 2-1-4-3-6-5

// Merge Linked Lists at alternate positions
node  * merge_alternate( node * head1, node * head2 );

// Move Last Node to front

// Swap Every two nodes in a linked list

// Delete Alternate Nodes of a linked List 

// Frequency of a given Number in a linked List
int find_frequency( node * head, int test_number );

// Insert nodes into a linked list in a sorted fashion
int insert_sorted( node * head, node * new_node );


// Program to find the n'th node from end of the linked list

// Find Length of Linked List
int find_legth( node * head );

