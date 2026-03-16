/*1. A logistics company uses a queue data structure to manage the order of
processing packages at their sorting center. Each package is identified by a
unique code represented as an integer.*/
#include <stdio.h>
int main() {
int n, i;
printf("Enter number of packages: ");
scanf("%d"
, &n);
int arr[100];
printf("Enter package codes: ");
for(i = 0; i< n; i++) {
scanf("%d"
, &arr[i]);
}
printf("Original queue: ");
for(i = 0; i< n; i++) {
printf("%d"
, arr[i]);
if(i != n-1) printf(" ");
}
printf("\nReversed queue: ");
for(i = n-1; i>= 0; i--) {
printf("%d"
, arr[i]);
if(i != 0) printf(" ");
}
return 0;
}
