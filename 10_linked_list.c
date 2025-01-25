// IMPLEMENTATION EXERCISE 2:
// Implement a singly linked list. It must support:
// - holding integer values,
// - initializing from an array,
// - iterating over all elements from the beginning to the end,
// - adding the element to the beginning and after any element,
// - removing any element,
// - updating any element.

#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode_t;

ListNode_t* new_list(int nums[], int len) {
    ListNode_t* res = (ListNode_t*)malloc(sizeof(ListNode_t));
    ListNode_t* curr_node = res;
    for (int i = 0; i < len; i++) {
        curr_node->val = nums[i];
        if (i != len - 1) {
            curr_node->next = (ListNode_t*)malloc(sizeof(ListNode_t));
            curr_node = curr_node->next;
        } else {
            curr_node->next = NULL;
        }
    }

    return res;
}

void print_list(ListNode_t* node) {
    do {
        printf("%d ", node->val);
        node = node->next;
    } while (node != NULL);
    printf("\n");
}

void free_list(ListNode_t* node) {
    int i = 0;
    while (node->next != NULL) {
        ListNode_t* prev_node = node;
        node = node->next;
        i++;
        free(prev_node);
    }
    i++;
    free(node);
    printf("Freed %d nodes\n", i);
}

void remove_idx(ListNode_t* node, int idx) {
    ListNode_t* prev_node = NULL;
    for (int i = 0; i < idx; i++) {
        prev_node = node;
        node = node->next;
    }

    if (prev_node) {
        prev_node->next = node->next;
    }
    free(node);
}

ListNode_t* insert_to_start(ListNode_t* node) {
    ListNode_t* res = (ListNode_t*)malloc(sizeof(ListNode_t));
    res->val = 0;
    res->next = node;
    return res;
}

void insert_after_idx(ListNode_t* node, int idx, int val) {
    for (int i = 0; i < idx; i++) {
        node = node->next;
    }
    ListNode_t* new_node = (ListNode_t*)malloc(sizeof(ListNode_t));
    new_node->val = val;
    new_node->next = node->next;
    node->next = new_node;
}

int main() {
    // Creating a new list
    const int n = 3;
    int nums[3] = {1, 2, 3};

    ListNode_t* list = new_list(nums, 3);

    print_list(list);
    insert_after_idx(list, 1, 4);
    print_list(list);

    // Freeing the list
    free_list(list);

    return 0;
}
