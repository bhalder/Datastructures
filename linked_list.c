/*  @Author :   Barun Halder
    @EMAIL  :   barunhaldernvs@gmail.com
    @DATE   :   December, 2015
    Linked List Implementation
*/

#include <stdio.h>
#include <linked_list.h>

// Create a node 
node * create_node( int data ) {
    node * new_node = (node *) malloc( sizeof( node ) );
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Add Node
void insert_last( node * head, node * new_node) {
    if ( head == NULL ) {
        printf(" HEAD NULL ");
        return;
    } else if ( head->next == NULL ) {
        head->next = new_node;
    } else {
        node * tmp_node = head;
        while( tmp_node->next != NULL ) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}

// Delete Node
void delete_node( node* head, int position ) {
    if( head == NULL ) {
        printf(" HEAD NULL ");
        return;
    } else if( head->next == NULL ) {
        printf("ERROR : List Empty");
        return;
    } else {
        node * tmp_node = head;
        int cur_pos = 0;
        while( tmp_node->next != NULL || cur_pos != position ) {
            tmp_node = tmp->next;
            cur_pos++;
        }
        if( cur_pos != position ) {
            printf("ERROR : The list does not have this position");
            return;
        }

        tmp_node->next = new_node;
    }
}

// Walk List
void walk_list (node * head ) {
    if( head == NULL ) {
        printf(" HEAD NULL ");
    } else if( head->next == NULL ) {
        printf("ERROR : List Empty");
    } else {
        node * cur_node = head->next;
        while( cur_node != NULL ) {
            printf("\n=>%d", cur_node->data);
        }
    }
}   

// Insert Front
// Push
void push( node * head, node * new_node ) {
    node * tmp_node = head->next;
    head->next = new_node;
    new_node->next = tmp_node;
}

// Insert Rear
void insert_last( node * head, node * new_node ) {
    if( head == NULL ) {
        printf("\nHead NULL");
        return;
    } else if ( head->next == NULL ) {
        head->next = new_node;
        return;
    } else {
        node * cur_node = head->next;
        while( cur_node->next != NULL ) {
            cur_node = cur_node->next;
        }
        cur_node->next = new_node;
    }
}

// delete node

void delete_node( node * head, node * delete_this ) {
     if( head == NULL ) {
        printf("\nHead NULL");
        return;
    } else if ( head->next == NULL ) {
        head->next = new_node;
        return;
    } else {
        node * cur_node = head->next;
        while( cur_node->next != NULL || cur_node->next != delete_this ) {
            cur_node = cur_node->next;
        } 

        if( current_node->next == delete_this ) {
            current_node->next = current_node->next->next;
            free( current_node->next);
        }

}

// delete last node 
void delete_last( node * head) {
    if( head == NULL ) {
        printf("\nHead NULL");
        return;
    } else if ( head->next == NULL ) {
        printf("\nERROR : List Empty");
        return;
    } else {
        node * cur_node = head->next;
        node * prev_node = head;
        while( cur_node->next != NULL ) {
            prev_node = cur_node;
            cur_node = cur_node->next;
        }
        prev_node->next = NULL;
        free( cur_node );
    }
}

// Delete List
void delete_list( node * head) {
    if( head == NULL ) {
        printf("\nHead NULL");
        return;
    } else if ( head->next == NULL ) {
        printf("\nError : List Empty");
        return;
    } else {
        node * cur_node = head->next;
        node * prev_node = head;
        while( cur_node->next != NULL ) {
            prev_node = cur_node;
            free( prev_node );
            cur_node = cur_node->next;
        }
        head->next = NULL;
    }
}

// Find Loop

int find_loop( node * head ) {
    if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return 0;
    } else {
        node * fast_ptr = head;
        node * slow_ptr = head;

        while( fast_ptr != NULL && slow_ptr != NULL ) {
            fast_ptr = fast_ptr->next;
            if( fast_ptr != NULL ) 
                fast_ptr = fast_ptr->next
            slow_ptr = slow_ptr->next

            if( slow_ptr == fast_ptr ) {
                printf("There is a loop");
                return 1;
            }
        }
    }
    return 0;
}

// Find Mid
node * find_mid( node * head ) {
    if( head == NULL ) {
        printf("Head NULL");
        return NULL;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return NULL;
    } else {
        node * fast_ptr = head;
        node * slow_ptr = head;

        while( fast_ptr != NULL) {
            fast_ptr = fast_ptr->next;
            if( fast_ptr != NULL )
                fast_ptr = fast_ptr->next
            slow_ptr = slow_ptr->next
            }
            return slow_ptr;
        }
    }
    return NULL;
}

// sort list

void sort_list( node* head) {

    if( head == NULL ) {
        printf("\nHead is NULL");
    } else if( head->next == NULL ) {
        printf("\nList is empty");
    } else { // ver1.0 : Bubble Sort here.
        int length = find_length( head );
        node * cur = head;
        node * min_node = NULL;
        if( length > 0 ) {
            for( int i = 0; i < length; i++ ) {
                for(int j = 0; j < length-i; j++) {
                    min_node = find_min(cur);
                    if( min_node != NULL ) {
                        move_after( head, cur, min_node);
                        cur = min_node;
                    } else {
                        printf("\nERROR : Sort List Failure. Exiting");
                        return;
                    }
                }
            }
        }
    }
}

node * find_min( node * n ) {
    if( n == NULL ) {
        printf("\nERROR : node is NULL. Cannot find the min.");
        return NULL;
    } else if ( n->next == NULL ) {
        printf("\nERROR : the list is empty. Cannot find min.");
        return NULL;
    } else {
        int min = 10000000; // MAGIC Number :'(
        node * cur = n;
        node * min_node = NULL;
        while( cur != NULL ) {
            cur = cur->next;
            if( cur->data < min ) {
                min_node = cur;
                min = cur->data;
            }
        }
        return min_node;
    }
} 

// Linked List in Reverse Order

// Remove Duplicates from the List

// Reverse a Linked List using Recursion

// Reverse every k nodes of a linked list
// Example : 1-2-3-4-5-6; k = 2; 2-1-4-3-6-5

// Merge Linked Lists at alternate positions
node  * merge_alternate( node * head1, node * head2 ){
    return NULL;
} 

// Move Last Node to front
void move_to_front( node * head ) {

    if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return 0;
    } else {
        node * temp = head;
        while( temp->next->next != NULL ) {
            temp = temp->next; 
        }
        head->next = temp->next;
        temp->next = NULL;
    }
}

// Move a node after another node 
void move_after( node * head, node * node1, node * node2 ) {

    if( head == NULL ) {
        printf("NULL head");
        return;
    } else if( node1 == NULL || node2 == NULL ) {
        printf("NODE NULL");
        return 0;
    } else {
        // Find the node before node2 - tmp1
        node * tmp = head;
        while(tmp != NULL ) {
            tmp = tmp->next;
            if( tmp->next == node2 ) {
                break; 
            }
        }
        if( tmp != NULL ) {
            tmp->next = node2->next;
            node2->next = node1->next;
            node1->next = node2;
        } else {
            printf("\nERROR : node2 not in list");
        }
    }
}


// Delete Alternate Nodes of a linked List 
void delete_alternate( node * head ) {
     if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return 0;
    } else {
        node * ptr = head;
        while( ptr->next != NULL ) {
            node * tmp = ptr->next;
            ptr->next = ptr->next->next;
            free( tmp );
        }            
    }  
}

// Frequency of a given Number in a linked List
int find_frequency( node * head, int test_number ) {
    int count = 0;
    if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return 0;
    } else {
        node * ptr = head;

        while( ptr != NULL) {
                ptr = ptr->next;
                if( ptr != NULL && ptr->data == test_number )
                    count++;
            }
        return count;
    }

}

// Insert nodes into a linked list in a sorted fashion
int insert_sorted( node * head, node * new_node ) {
    if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        head->next = new_node;
        return 0;
    } else {
        node * ptr = head;

        while( ptr->next != NULL) {
                ptr = ptr->next;
                if(ptr->next->data >= new_node->data && ptr->data =< new_node->data )
                new_node->next = ptr->next;
                ptr->next = new_node;
            }
        return count;
    }
}


// Program to find the n'th node from end of the linked list
node * find_nth(node * head, int n) {
    int cnt = 0;
    if( head == NULL ) {
        printf("Head NULL");
        return NULL;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return NULL;
    } else {
        node * fast = head;
        node * slow = head;
        
        while ( fast != NULL ) {
            fast = fast->next;
            cnt++;
            if( cnt == n ) {
                break;
            }
        }

        if( cnt != n ) {
            return NULL;
        }
     
        while(fast != NULL ) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    } 
}

// Find Length of Linked List
int find_legth( node * head ) {
    int length = 0;
    if( head == NULL ) {
        printf("Head NULL");
        return 0;
    } else if( head->next == NULL ) {
        printf("\nEmpty List");
        return 0;
    } else {
        node * fast_ptr = head;

        while( fast_ptr != NULL) {
                fast_ptr = fast_ptr->next;
                length++;
            }
            return length;
    }
    return 0;
}

