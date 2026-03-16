/*3. Arun is tasked with implementing a program to reverse a
singly linked list. The program should populate the list
elements by inserting them at the beginning, traverse the
list and reverse the order of its elements. Since Arun is
new to programming, you have to guide him through the
task.*/
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
printf("List after inserting at beginning: ");
temp = head;
while(temp != NULL) {
printf("%d"
, temp->data);
if(temp->next != NULL) printf(" ");
temp = temp->next;
}
struct Node *prev = NULL,
*curr = head,
*nextNode;
while(curr != NULL) {
nextNode = curr->next;
curr->next = prev;
prev = curr;
curr = nextNode;
}
head = prev;
printf("\nReversed list: ");
temp = head;
while(temp != NULL) {
printf("%d"
, temp->data);
if(temp->next != NULL) printf(" ");
temp = temp->next;
}
return 0;
}
