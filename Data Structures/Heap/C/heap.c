#include<stdio.h>
#include<limits.h>
 
/*Declaring heap globally so that we do not need to pass it as an argument every time*/
/* Heap implemented  here is Min Heap */
 
int heap[1000000], heapSize;
/*Initialize Heap*/
void Init() {
    heapSize = 0;
    heap[0] = -INT_MAX;
}
 
/*Insert an element into the heap */
void Insert(int element) {
    heapSize++;
    heap[heapSize] = element; /*Insert in the last place*/
    /*Adjust its position*/
    int now = heapSize;
    while (heap[now / 2] > element) {
        heap[now] = heap[now / 2];
        now /= 2;
    }
    heap[now] = element;
}
 
int DeleteMin() {
    
    lastElement = heap[heapSize--];
   
    for (now = 1; now * 2 <= heapSize; now = child) {
       
        child = now * 2;
       
        if (child != heapSize && heap[child + 1] < heap[child]) {
            child++;
        }
       
        if (lastElement > heap[child]) {
            heap[now] = heap[child];
        } else /* It fits there */
        {
            break;
        }
    }
    heap[now] = lastElement;
    return minElement;
}
 
int main() {
    int number_of_elements;
    printf("Program to demonstrate Heap:\nEnter the number of elements: ");
    scanf("%d", &number_of_elements);
    int iter, element;
    Init();
    printf("Enter the elements: ");
    for (iter = 0; iter < number_of_elements; iter++) {
        scanf("%d", &element);
        Insert(element);
    }
    for (iter = 0; iter < number_of_elements; iter++) {
        printf("%d ", DeleteMin());
    }
    printf("\n");
    return 0;
}
