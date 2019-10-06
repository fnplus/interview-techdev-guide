#Defining function for Linear Search
def Linear_Search(input_list, key):
    flag = 0
    #Iterating each item in the list and comparing it with the key searching for
    for i in range(len(input_list)):
        if(input_list[i] == key):
            #If key matches with any of the list items
            flag = 1
            print("\nKey is found in the position: {}" .format(i))
    #If key not found
    if(flag == 0):
        print("\nKey not found")

#Input List
input_list = [11,12,13,14,15,16,17,18,19]
print("List available is {}" .format(input_list))
#Getting Key from user
key = input("\nEnter key to be searched in the list")
key = int(key)
#Calling function defined to perform Linear Search
Linear_Search(input_list, key)


            
        
