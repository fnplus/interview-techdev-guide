import random
 
def bogosort(array):
   random.shuffle(array)
   while array != sorted(array):
       random.shuffle(array)
   return array
 
numbers = [2,4,6,8,10,9,7,5,3,1]
print(numbers)
numbers = bogosort(numbers)
print(numbers)