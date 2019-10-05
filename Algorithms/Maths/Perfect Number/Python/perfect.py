print( "Enter Perfect Number interval:" )

start = input("Start:")
end   = input("End:")

for number in range(start, end):
	accum = 0

	for index in range(1 , number):
		if number % index == 0:
			accum =  accum + index

	if accum == number:
		print(number)
			
