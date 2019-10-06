input_num = int(input())

def isMagic(input_num):
	z = len(list(str(input_num)))
	for x in range(1,z+1):
		rem = int(input_num % 10)
		input_num = int(input_num/10)
		input_num = rem + input_num
	if(input_num == 1):
		print('Magic Number')
	else:
		print("Not a Magic Number")


isMagic(input_num)

