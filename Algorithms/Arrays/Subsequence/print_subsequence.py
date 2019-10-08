# Recursive Function to Generate All Subsequence of integer Array
# curr points to current index of original Array A
# idx points to current index of temporary Array temp
def fun(curr, idx, A, temp):

	if curr == len(A):   # If curr has reached to n the print temp array

		for i in range(idx):
			print(temp[i], end = "")
		print()
		return

	fun(curr+1, idx , A, temp) # Calling function without taking current element
	temp[idx] = A[curr]
	fun(curr+1, idx+1, A ,temp)  # Calling function after taking current element

def main():

   n = int(input("\nEnter number of Array Elements: "))
   A = [None] * n
   print("Enter Array Elements:")

   for i in range(n):
	   A[i] = int(input())

   temp = [0] * 10000 # temporary array to hold subsequence
   print("\nFollowing subsequences of given array are generated:")
   fun(0, 0, A, temp) # Function to generate subsequenceS

if __name__ == "__main__":
	main()
