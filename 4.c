/*4. Dev is tasked with creating a program that efficiently
finds the middle element of a linked list. The program
should take user input to populate the linked list by
inserting each element into the front of the list and then
determining the middle element.*/
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
int main() {
int n, i, value;
struct Node *head = NULL,
*newNode,
*temp;
printf("Enter number of elements: ");
scanf("%d"
, &n);
printf("Enter elements: ");
for(i = 0; i< n; i++) {
scanf("%d"
, &value);
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = head;
head = newNode;
}
printf("Linked list: ");
temp = head;
while(temp != NULL) {
printf("%d"
, temp->data);
if(temp->next != NULL) printf(" ");
temp = temp->next;
}
struct Node *slow = head,
*fast = head;
while(fast != NULL && fast->next != NULL) {
slow = slow->next;
fast = fast->next->next;
}
printf("\nMiddle Element: %d"
, slow->data);
}
return 0;
}
