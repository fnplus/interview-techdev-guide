# A python program to sort array using shell sort
def shellSort(alist):
    sublistcount = len(alist)//2
    while sublistcount > 0:
      for start_position in range(sublistcount):
        gap_InsertionSort(alist, start_position, sublistcount)

      print("After increments of size",sublistcount, "The list is",numberlist)

      sublistcount = sublistcount // 2

def gap_InsertionSort(numberlist,start,gap):
    for i in range(start+gap,len(numberlist),gap):

        current_value = numberlist[i]
        position = i

        while position>=gap and numberlist[position-gap]>current_value:
            numberlist[position]=numberlist[position-gap]
            position = position-gap

        numberlist[position]=current_value


numberlist = [14,46,43,27,57,41,45,21,70]
shellSort(numberlist)
print(numberlist)
