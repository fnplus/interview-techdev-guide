#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INITIAL_CAPACITY 10
#define customFor(i,n) for(i = 0 ; i< n ; i++)
typedef struct Element{
    void* value;
} Element;
typedef struct Array{
    Element* array;
    int size;
    int capacity;
} Array;
struct Array createArray(){
    Array array;
    array.capacity = INITIAL_CAPACITY;
    array.size = 0;
    array.array = calloc(array.capacity, sizeof(Element));
    return array;
}
void add(Array* array, void* value){
    if((array->size+1) > array->capacity){
        array->capacity *= 2;
        array->array = realloc(array->array,array->capacity* sizeof(Element));
    }
    Element *element = malloc(sizeof(Element));
    element->value = value;
    array->array[array->size] = *element;
    array->size ++;
}
void removeElement(Array *array,int i){
    memmove(&array->array[i],&array->array[i+1],(array->size-i)* sizeof(Element));
    array->size--;
}
void* get(Array *array,int i){
    return array->array[i].value;
}
void forEach(Array *array, void (*action)(void *)) {
    for (int i = 0; i < array->size; ++i) {
        action(array->array[i].value);
    }
}
void testIntegerArray();
void testCharArray();
void printIntPtrValue(int* value){
    printf("%d ",*value);
}
void printCharPtrValue(char* value){
    printf("%s ",value);
}
int main() {
    testIntegerArray();
    testCharArray();
    return 0;
}
void testIntegerArray(){
    Array integerArray = createArray();
    printf("Testing Dynamic Array with int elements\n");
    printf("Initial capacity= %d\n", integerArray.capacity);
    printf("Size= %d\n", integerArray.size);
    printf("Adding twenty integers\n");
    for (int i=0;i<20;i++){
        int *x = malloc(sizeof(int));
        *x=i;
        add(&integerArray, x);
    }
    printf("Size= %d\n", integerArray.size);
    printf("Printing Dynamic Array with forEach : \n");
    forEach(&integerArray, printIntPtrValue);
    printf("\nDeleting element at index 7 and 19...\n");
    removeElement(&integerArray,7);
    removeElement(&integerArray,19);
    printf("Size= %d\n", integerArray.size);
    printf("Printing Dynamic Array with for loop: \n");
    int i =0;
    customFor(i,integerArray.size){
        printIntPtrValue(get(&integerArray,i));
    }
}
void testCharArray() {
    printf("\n");
    printf("-------------------------------------------------------\n");
    Array charArray = createArray();
    printf("Testing Dynamic Array with chars elements\n");
    printf("Initial capacity= %d\n", charArray.capacity);
    printf("Size= %d\n", charArray.size);
    printf("Adding some char\n");
    add(&charArray,"C");
    add(&charArray,"C++");
    add(&charArray,"PHP");
    add(&charArray,"Java");
    add(&charArray,"Javascript");
    add(&charArray,"C#");
    printf("Size= %d\n", charArray.size);
    printf("Printing Dynamic Array with forEach : \n");
    forEach(&charArray, printCharPtrValue);
    printf("\nDeleting element at index 2 and 5...\n");
    removeElement(&charArray,2);
    removeElement(&charArray,5);
    printf("Size= %d\n", charArray.size);
    printf("Printing Dynamic Array with for loop: \n");
    int i =0;
    customFor(i,charArray.size){
        printCharPtrValue(get(&charArray,i));
    }
}