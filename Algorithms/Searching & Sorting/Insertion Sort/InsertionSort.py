class InsertionSort():
    def __init__(self, list_to_sort):
        self.sorted_list = list_to_sort
        self.__sort()
    
    def __sort(self):
        i = 1
        while i < len(self.sorted_list):
            x = self.sorted_list[i]
            j = i - 1
            while j >= 0 and self.sorted_list[j] > x:
                self.sorted_list[j + 1] = self.sorted_list[j]
                j -= 1
            self.sorted_list[j + 1] = x
            i += 1
    
    def add_element(self, element):         # can be used for online sorting: keep list sorted by adding elements one by one.
        j = len(self.sorted_list) - 1
        while j >= 0 and self.sorted_list[j] > element:
            j -= 1
        self.sorted_list.insert(j + 1, element)

    @staticmethod
    def sort(list_to_sort):                 # inplace sort
        InsertionSort(list_to_sort)

def main():
    print("Enter list elements, seperated by space \" \":")
    numbers = [int(x) for x in input().strip().split(' ')]
    InsertionSort.sort(numbers)
    print(numbers)

if __name__ == '__main__':
    main()