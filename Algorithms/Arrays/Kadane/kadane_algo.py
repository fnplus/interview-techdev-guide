# Function to find the maximum subarray sum
# using Kadane's Algorithm
def kadane_algo(arr):

    csum = osum = arr[0]
    for i in range(1, len(arr)):

        if csum < 0:
            csum = arr[i]
        else:
            csum += arr[i]

        if csum > osum:
            osum = csum

    print("Max sum is", osum)

def main():

    n = int(input("Enter the size of the array: "))
    print("Enter the elements of the array")
    arr = [None] * n

    for i in range(n):
        arr[i] = int(input())

    kadane_algo(arr)

if __name__ == "__main__":
    main()
