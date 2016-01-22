#include <stdio.h>

typedef struct node_t {
    int val;
    struct node_t * left;
    struct node_t * right;
} node;

node * queue[100];
int top = 0;
int back = 0;

void enqueue( node * new_node) {
    queue[back++] = new_node;
} 

node * dequeue() {
    return( queue[top++] );
}

int main() {
    
    int n = 0;
    int in = 0;

    printf("\nEnter Elements ");
    scanf("%d", &n);
    
    int i = 0;

    node * head = (node *) malloc( sizeof( node ) ) ;
    head->left = NULL;
    head->right = NULL;
    head->val = 10;
    
    for( i = 0; i < n ; i++ ) {
        scanf("%d", &in);
        node * new_node = (node *) malloc( sizeof( node ) ) ;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->val = in;
        node * cur = head;
        node * prev = head;    

        while( cur!= NULL ) {
            prev = cur;
            if( in < cur->val ) {
                cur = cur->left;
            } else {
                cur = cur->right;
            }
        }
        if( in > prev->val ) {
            prev->right = new_node;
        } else {
            prev->left = new_node;
        }
    }

    int height = 0;
    enqueue( head );

    while( top != back ) {
        node * cur = dequeue();
        printf("%d ", cur->val);
        if( height % 2 == 0 ) { 
            if( cur->left != NULL ) {
                enqueue( cur->left );
            }
            if( cur->right != NULL ) {
                enqueue( cur->right );
            }
            
        } else {
            if( cur->right != NULL ) {
                enqueue( cur->right );
            }
            if( cur->left != NULL ) {
                enqueue( cur->left );
            }
        }
    } 
}
