"""Find the maximum sum of subarray using Kadane algorithm.
"""
def get_max_sum(arr):
    max_sum = float("-inf")
    running_sum = float("-inf")
    
    for a in arr:
      running_sum = max(running_sum + a, a)
      max_sum = max(max_sum, running_sum)
      
    return max_sum

def main():
    n = int(input("Enter the size of the array: "))
    print("Enter the elements of the array")
    arr = []

    for _ in range(n):
        arr.append(int(input()))

    print("Max sum is %s", get_max_sum(arr))

if __name__ == "__main__":
    main()
    
