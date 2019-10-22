def gaps(size):
  # uses the gap sequence 2^k - 1: 1, 3, 7, 15, 31, ...
  length = size.bit_length()
  for k in range(length - 1, 0, -1):
    yield 2**k - 1
 
 
def shell_sort(alist):
  def insertion_sort_with_gap(gap):
    for i in range(gap, len(alist)):
      temp = alist[i]
      j = i - gap
      while (j >= 0 and temp < alist[j]):
        alist[j + gap] = alist[j]
        j = j - gap
      alist[j + gap] = temp

  for g in gaps(len(alist)):
    insertion_sort_with_gap(g)
 
 
alist = input('Enter the list of numbers: ').split()
alist = [int(x) for x in alist]
shell_sort(alist)
print('Sorted list: ', end='')
print(alist)