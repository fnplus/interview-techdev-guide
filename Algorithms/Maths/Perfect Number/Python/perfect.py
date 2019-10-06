def main():
	print( "Enter Perfect Number interval:" )

	start = int(input("Start:"))
	end   = int(input("End:"))

	for number in range(start, end):
		accum = 0

		for index in range(1 , number):
			if number % index == 0:
				accum =  accum + index

		if accum == number:
			print(number)
			
if __name__ == '__main__':
    main()
