#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*DeleteFunction)(void*);
typedef void (*PrintFunction)(void*);

struct DataNode {
    DeleteFunction delete_function;
    void* data;
    struct DataNode* next;
    struct DataNode* prev;
};

typedef struct DataNode* List;
typedef struct DataNode* Node;

List create_list();

void delete_node(List head, Node node);

void pop_front(List head);

void clear_list(List head);

void free_list(List head);

void push_front(List head, void* data, DeleteFunction delete_function);

void print_list(List head, PrintFunction print_function);

void print_float(void* data) {
    printf("%.2f ", *((float*)data));
}

float list_sum(List head) {
    if (head == NULL) return 0.0f;

    float sum = 0.0f;
    Node current = head->next;
    while (current != head) {
        sum += *((float*)current->data);
        current = current->next;
    }
    return sum;
}

int list_size(List head) {
    if (head == NULL) return 0;

    int count = 0;
    Node current = head->next;
    while (current != head) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    List list = create_list();
    int n;
    char command[20];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "PUSH") == 0) {
            float value;
            scanf("%f", &value);
            float* data = (float*)malloc(sizeof(float));
            *data = value;
            push_front(list, data, free);
            printf("PUSH %.2f OK\n", value);

        } else if (strcmp(command, "POP") == 0) {
            if (list_size(list) > 0) {
                float front_value = *((float*)list->next->data);
                pop_front(list);
                printf("POP %.2f OK\n", front_value);
            } else {
                printf("POP FAIL: list is empty\n");
            }

        } else if (strcmp(command, "PRINT") == 0) {
            if (list_size(list) > 0) {
                printf("LIST: ");
                print_list(list, print_float);
            } else {
                printf("LIST: empty\n");
            }

        } else if (strcmp(command, "SUM") == 0) {
            float sum = list_sum(list);
            printf("SUM: %.2f\n", sum);

        } else if (strcmp(command, "SIZE") == 0) {
            int size = list_size(list);
            printf("SIZE: %d\n", size);

        } else if (strcmp(command, "CLEAR") == 0) {
            clear_list(list);
            printf("CLEAR OK\n");

        } else {
            printf("ERROR: unknown command %s\n", command);
        }
    }

    free_list(list);
    return 0;
}


// 你的代码会被附加到这里
List create_list(){
    List head = (List)malloc(sizeof(struct DataNode));
    head->next = head;
    head->prev = head;
    head->data = NULL;
    head->delete_function = NULL;
    return head;
};

void delete_node(List head, Node node){
    if (head == NULL || node == NULL) return;
    if (node == head) {
        return;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
    if (node->delete_function) {
        node->delete_function(node->data);
    }
    free(node);
}

void pop_front(List head){
    if(head->next==head){
        return;
    }
    delete_node(head, head->next);
}

void clear_list(List head){
    while(head->next != head){
        delete_node(head, head->next);
    }
}

void free_list(List head){
    clear_list(head);
    free(head);
}

void push_front(List head, void* data, DeleteFunction delete_function){
    if (head == NULL) return;
    Node new = (Node)malloc(sizeof(struct DataNode));
    if (new == NULL) return;
    new->data = data;
    new->delete_function = delete_function;
    new->next = head->next;
    new->prev = head;
    head->next->prev = new;
    head->next = new;

}

void print_list(List head, PrintFunction print_function){
    if(head == NULL) return;
    Node current = head->next;
    while(current != head){
        print_function(current->data);
        current = current->next;
    }
    printf("\n");
}
