# Time complexity O(n log n)

class ItemValue:

	def __init__(self, wt, val, ind):
		self.wt = wt
		self.val = val
		self.ind = ind
		self.cost = val / wt

# function to get maximum value
def getMaxValue(wt, val, capacity):

	iVal = [None] * len(wt)
	for i in range(len(wt)):
		iVal[i] = ItemValue(wt[i], val[i], i)

	# sorting items by value in descending order
	iVal.sort(key = lambda x: -x.val)
	totalValue = 0

	for i in iVal:
		curWt = i.wt
		curVal = i.val

		if capacity - curWt >= 0:
			# this weight can be picked while
			capacity = capacity-curWt
			totalValue += curVal

		else:

			# item cant be picked whole
			fraction = capacity / curWt
			totalValue += curVal*fraction
			capacity = int(capacity - (curWt*fraction))
			break

	return totalValue

def main():

	wt = [10, 40, 20, 30]
	val = [60, 40, 100, 120]
	capacity = 50

	maxValue = getMaxValue(wt, val, capacity)
	print("Maximum value we can obtain =", maxValue)

if __name__ == "__main__":
	main()
