# Return true if there exists a sub-array of array[0..n] with given sum
def subsetSum(A, n, sum):

	# return true if sum becomes 0 (subset found)
	if sum == 0:
		return True

	# base case: no items left or sum becomes negative
	if n < 0 or sum < 0:
		return False

	# Case 1. include current item in the subset (A[n]) and recur
	# for remaining items (n - 1) with remaining sum (sum - A[n])
	include = subsetSum(A, n - 1, sum - A[n])

	# Case 2. exclude current item n from subset and recur for
	# remaining items (n - 1)
	exclude = subsetSum(A, n - 1, sum)

	# return true if we can get subset by including
	# or excluding the current item
	return include or exclude

# Subset Sum Problem
def main():

	# Input: set of items and a sum
	n = int(input())
	sum = int(input())
	A = [None] * n

	for i in range(n):
	  A[i] = int(input())

	if subsetSum(A, n - 1, sum): 
		print("Yes")

	else:
		print("No")

if __name__ == "__main__":
	main()
