#!/usr/bin/python
# QuickSort

items = [8, 3, 1, 7, 0, 10, 2]
pivot_index = len(items) -1
pivot_value = items[pivot_index]
left_index = 0

while (pivot_index != left_index):
    item = items[left_index]

    # item = items[0]
    # pivot_value = 10
    if item <= pivot_value:
        left_index = left_index + 1
        continue

    # Place the item before the pivot at the left_index
    # left index becomes 0
    items[left_index] = items[pivot_index -1]

    # Shift Pivot one to the left
    items[pivot_index -1] = pivot_value

    # place item at pivots previous location
    items[pivot_index] = item

    # update pivot index
    pivot_index = pivot_index -1

# We want our function to become recursive
# we want to take the value from our first iteration and act on it
# to do this, we need to communicate the final pivot_index value
# we take this value , and start to mark off segments of the list
# and have our function operate on less than the entire list.items
# so lets change the function to accept the indeices it should stay within, and return the pivot_index
def sort_a_little_bit(items, begin_index, end_index):
    left_index = begin_index
    pivot_index = end_index
    pivot_value = items[pivot_index]

    while (pivot_index != left_index):

        item = items[left_index]

        if item <= pivot_value:
            left_index += 1
            continue

        items[left_index] = items[pivot_index - 1]
        items[pivot_index - 1] = pivot_value
        items[pivot_index] = item
        pivot_index -= 1
    
    return pivot_index

# Now we will make this recursive.
# we need to know a way to confirm we are done.
# we wil use the indices to see if they demark a list of more than one item.
# if the demarked sublist is 0 or 1 item, we know its already sorted.
def sort_all(items, begin_index, end_index):
    if end_index <= begin_index:
        return
    
    pivot_index = sort_a_little_bit(items, begin_index, end_index)
    sort_all(items, begin_index, pivot_index - 1)
    sort_all(items, pivot_index + 1, end_index)
    
def quicksort(items):
    sort_all(items, 0, len(items) - 1)
    
items = [8, 3, 1, 7, 0, 10, 2]
print ("List Of Items Before QuickSorting: ")
print (items)
print ("********************************")
print ("List Of Items After QuickSorting: ")
quicksort(items)
print(items)
