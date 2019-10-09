from math import log10, sqrt

class PerfectNumber():
    def __init__(self, number):
        self.number = number
        self.sum_of_divisors = None

    @staticmethod
    def is_perfect_number(number):
        num = PerfectNumber(number)
        if not num.__could_be_perfect():
            return False
        num.__calc_sum_of_divisors()
        if num.sum_of_divisors == number * 2:
            return True
        else:
            return False
    
    def __calc_sum_of_divisors(self):
        sum_of_divisors = 1 + self.number
        i = 2
        number_sqrt = sqrt(self.number)
        while i < number_sqrt:
            if self.number % i == 0:
                sum_of_divisors += i + self.number // i
            i += 1
        if i * i == self.number:
            sum_of_divisors += i
        self.sum_of_divisors = sum_of_divisors
    
    def __could_be_perfect(self):
        if type(self.number) is not int:        #shoud be an integer
            return False
        if self.number <= 0:                    #should be positive 
            return False
        if self.number % 2 == 1:                #based on conditions described in wikipedia.org/wiki/Perfect_number
            if log10(self.number) <= 1500:
                return False
            if self.number % 105 == 0:
                return False
            if self.number % 12 != 1 and self.number % 468 != 117 and self.number % 324 != 81:
                return False
            #TODO: implement other restricting conditions
        else:
            #TODO: may possible to implement some restricting conditions for even numbers too.
            pass
        return True


def main():
    Number = int(input("Enter an integer number:"))
    print(PerfectNumber.is_perfect_number(Number))

if __name__ == '__main__':
    main()