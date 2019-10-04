#Implementation of fibonacci in python
# Fibonnaci with first value 0 i.e. 1:0

class Fibonacci:
    def __init__(self,store={1:0,2:1}):
        self.dict=store

    def Fibonacci_series(self,number):
        series=[]
        for i in range(1,number+1):
            series.append(self.Fibonacci_number(i))
        return series

    def Fibonacci_number(self,number):
        if number in self.dict:
            return self.dict[number]
        else:
            k=self.Fibonacci_number(number-1)+self.Fibonacci_number(number-2)
            self.dict[number]=k
            return k

def main():
    fibo=Fibonacci()
    print(fibo.Fibonacci_number(500))
    print(fibo.Fibonacci_series(50))

if __name__ == "__main__":
    main()
        
