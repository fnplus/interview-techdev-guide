

def tower_of_hanoi(n, fromm, to, temp):
    if n==1:
        print(f'move disk to 1: {fromm} -> {to}')
        return
    
    tower_of_hanoi(n-1, fromm, temp, to)
    print(f'move disk to {n} : {fromm} -> {to}')
    tower_of_hanoi(n-1, temp, to, fromm)


if __name__ == "__main__":
    n = int(input("Enter a number"))
    tower_of_hanoi(n, "A", "B", "C")
