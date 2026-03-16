/*2. John is tasked with creating a program to manage student roll
numbers using a singly linked list. Write a program for John that
accepts students‘roll numbers, inserts them at the end of the linked
list, and displays the numbers.*/
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
int main() {
int n, i, value;
struct Node *head = NULL,
*temp,
*newNode;
printf("Enter number of students: ");
scanf("%d"
, &n);
printf("Enter roll numbers: ");
for(i = 0; i< n; i++) {
scanf("%d"
, &value);
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if(head == NULL) {
head = newNode;
} else {
temp = head;
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
}
printf("Linked list: ");
temp = head;
while(temp != NULL) {
printf("%d"
, temp->data);
if(temp->next != NULL) printf(" ");
temp = temp->next;
}
return 0;
