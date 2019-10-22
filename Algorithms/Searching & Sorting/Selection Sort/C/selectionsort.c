/*Basic program to ask a user for the size
of an array they want to input, and then ask them for
the numbers they want stored in the array. The program
then prints those numbers in a sorted list, using
selection sort to do the sort.

Selection sort is implemented differently from bubble sort
in that a minimum index position must be identified within
the nested for loops (i = min_ind), so that elements
can continuously be compared to a minimum value stored in
the first index of the sorted portion of the list. This
is how selection sort makes its comparisons.*/


int main()

{

int n, i, j, min_index, swap; //n is array size.

printf("Please enter an array size: ");

scanf("%d", &n);

int array[n]; // array of size ‘n’

printf("Please enter the numbers in the array, separated by a comma:\n ");


for(i=0;i<n;i++) { //grabs the numbers input by the user

    scanf("%d,",&array[i]);

}

for (i = 0; i < n; i++) {

    min_index = i; //saying i is the current index place

    for (j = i + 1; j < n; j++) //need the nested loop so you can make the comparison
    {
      if (array[min_index] > array[j]) //if current position's element is greater than than the element in index j
        min_index = j;
    }
    if (min_index != i) //if current position is not i
    {
      swap = array[i]; //create temp variable called swap
      array[i] = array[min_index]; //moving i to min_index
      array[min_index] = swap; //setting array[min_index] to be value of temp variable
    }

    printf("%d\n",array[i]);

    }

    return 0;

}

