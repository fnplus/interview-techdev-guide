def print_fibonacci(num):

    first, second = 0, 1
    print(first)
    print(second)
    num = num - 2
    
    while num > 0:
    
        num = num - 1
        first, second = second, first + second
        print(second)

def main():
    
     n = int(input("\nEnter the number of terms of Fibonacci series to be printed: "))
     print_fibonacci(n)

if __name__ == "__main__":
	main()
