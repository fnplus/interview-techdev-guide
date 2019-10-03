
**The task is to design and implement methods of an LRU cache. The class has two methods get() and set() which are defined as follows.**

**get(x)   : Returns the value of the key x if the key exists in the cache otherwise returns -1.**

**set(x,y) : inserts the value if the key x is not already present. If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
In the constructor of the class the size of the cache should be intitialized.**

    Input Format:
    The first line of input contain an integer T denoting the number of test cases. Then T test case follow. Each test case contains 3 lines. The first line of input contains an integer N denoting the capacity of the cache and then in the next line is an integer Q denoting the number of queries Then Q queries follow. A Query can be of two types
    1. SET x y : sets the value of the key x with value y
    2. GET x : gets the key of x if present else returns -1.

    Output Format:
    For each test case, in a new line, output will be space separated values of the query.

    Constraints:
    1 <= T <= 100
    1 <= N <= 10
    1 <= Q <= 100

    Example(To be used only for expected output):
    Input:
    2
    2
    2
    SET 1 2 GET 1
    2
    7
    SET 1 2 SET 2 3 SET 1 5 SET 4 5 SET 6 7 GET 4 GET 1

    Output:
    2
    5 -1