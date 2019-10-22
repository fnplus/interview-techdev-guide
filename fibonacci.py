"""
Usage: fibonacci(number). 
Example: fibonnaci(8)
"""
fibonacci = lambda n:reduce(lambda x,n:[x[1],x[0]+x[1]], range(n),[0,1])[0]
fibonacci(8)
