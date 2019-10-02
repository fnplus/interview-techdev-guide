# Welcome to Google Interview Questions

***Enjoy the coding challenge***

_Question 1)_

**Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.**

    Input:
    The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

    Output:
    For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

    Constraints:
    1 <= T <= 100
    1 <= N <= 107
    1 <= Ai <= 1010

    Example:
    Input:
    2
    5 12
    1 2 3 7 5
    10 15
    1 2 3 4 5 6 7 8 9 10
    Output:
    2 4
    1 5

    Explanation :
    Testcase1: sum of elements from 2nd position to 4th position is 12
    Testcase2: sum of elements from 1st position to 5th position is 15

---
_Question 2)_

**Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].**

    Input:
    The first line contains an integer T, depicting total number of test cases.  Then T test case follows. First line of each test case contains an integer N denoting the size of the array. Next line contains N space separated integeres denoting the elements of the array.

    Output:
    Print the maximum difference of the indexes i and j in a separtate line.

    Constraints:
    1 ≤ T ≤ 1000
    1 ≤ N ≤ 107
    0 ≤ A[i] ≤ 1018

    Example:
    Input:
    1
    9
    34 8 10 3 2 80 30 33 1

    Output:
    6

    Explanation:
    Testcase 1:  In the given array A[1] < A[7] satisfying the required condition(A[i] <= A[j]) thus giving the maximum difference of j - i which is 6(7-1).

---

_Question 3)_

**You are given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.**
 

    Input :
    The first line contains a value T, which denotes the number of test cases. Then T test cases follow .The first line of each test case contains a value N. The next line contains 2*N+2 space separated integers.

    Output :
    Print in a new line the two numbers in ascending order.

    Constraints :
    1<=T<=100
    1<=N<=10^6
    1<=A[i]<=5*10^8

    Example:
    Input :
    2
    2
    1 2 3 2 1 4
    1
    2 1 3 2

    Output :
    3 4
    1 3

---

_Question 4)_

**Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.**

    Input:
    First line contains number of test cases T.  Each test case have one line string S of character '(' and ')' of length  N.

    Constraints:
    1 <= T <= 500
    1 <= N <= 105

    Example:
    Input:
    2
    ((()
    )()())

    Output:
    2
    4

    Explanation:
    Testcase 1: Longest valid balanced parantheses is () and its length is 2.

---

_Question 5)_

**Given a positive number X. Find all Jumping Numbers smaller than or equal to X.**

**Jumping Number: A number is called Jumping Number if all adjacent digits in it differ by only 1. All single digit numbers are considered as Jumping Numbers.**

 **For example 7, 8987 and 4343456 are Jumping numbers but 796 and 89098 are not.**

    Input:
    The first line of the input contains T denoting the number of testcases. Each testcase contain a positive number X.

    Output:
    Output all the jumping numbers less than X in sorted order. Jump to example for better understanding.

    Constraints:
    1 <= T <= 100
    1 <= N <= 109

    Example:
    Input:
    2
    10
    50
    Output:
    0 1 2 3 4 5 6 7 8 9 10
    0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45

    Explanation:
    Testcase 2: Here, the most significant digits of each jumping number is following increasing order,

    i.e., jumping numbers starting from 0, followed by 1, then 2 and so on, themselves being in increasing order 2, 21, 23.

---

_Question 6)_

**Given a Binary Search Tree (BST) and a range l-h(inclusive), count the number of nodes in the BST that lie in the given range.**

    The values smaller than root go to the left side
    The values greater and equal to the root go to the right side

    Input Format:
    The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of three lines. Description of  test cases is as follows:
    The First line of each test case contains an integer 'N' which denotes the no of nodes in the BST.   .
    The Second line of each test case contains 'N' space separated values of the nodes in the BST.
    The Third line of each test case contains two space separated integers 'l' and 'h' denoting the range, where l < h

    Output:
    For each testcase, in a new line, output the number of nodes that lie in the range l-h.

    Your Task:
    This is a function problem. You don't have to take input. You are required to complete the function getCountOfNode() that takes root, l ,h as parameters and returns the count.

    Constraints:
    1 <= T <= 100
    1 <= N <= 100
    1 <= l < h < 103

    Example:
    Input:
    2
    6
    10 5 50 1 40 100
    5 45
    5
    5 6 7 4 3
    2 8

    Output:
    3
    5

---

_Question 7)_

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

    Your Task:
    This is a function problem. You only need to complete the provided functions.

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

---

_Question 8)_

**Given an input string and a dictionary of words, find out if the input string can be segmented into a space-separated sequence of dictionary words. See following examples for more details.**

    Consider the following dictionary
    { i, like, sam, sung, samsung, mobile, ice,
    cream, icecream, man, go, mango}

    Input:  ilike
    Output: Yes
    The string can be segmented as "i like".

    Input:  ilikesamsung
    Output: Yes
    The string can be segmented as "i like samsung" or "i like sam sung".

    Input:
    First line is integer T denoting number of test cases. 1<=T<=100.
    Every test case has 3 lines.
    First line is N number of words in dictionary. 1<=N<=12.
    Second line contains N strings denoting the words of dictionary. Length of each word is less than 15.
    Third line contains a string S of length less than 1000.

    Output:
    Print 1 is possible to break words, else print 0.

    Example:
    Input:
    2
    12
    i like sam sung samsung mobile ice cream icecream man go mango
    ilike
    12
    i like sam sung samsung mobile ice cream icecream man go mango
    idontlike
    Output:
    1
    0

---

_Question 9)_

**Given an array A[] of N elements. The task is to complete the function which returns true if triplets exists in array A whose sum is zero else returns false.**

    Input Format:
    The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N, denoting the number of elements in array. The second line of each test case contains N space separated values of the array.

    Output:
    For each test case, output will be 1 if triplet exists else 0.

    Your Task:
    Your task is to complete the function findTriplets() which check if the triplet with sum 0 exists or not. This is of boolean type which returns either true of false.

    Constrains:
    1 <= T <= 100
    1 <= N <= 106
    -106 <= A <= 106

    Example:
    Input:
    2
    5
    0 -1 2 -3 1
    3
    1 2 3

    Output:
    1
    0

    Explanation:
    Testcase 1: 0, -1 and 1 forms a triplet with sum equal to 0.
    Testcase 2: No triplet exists which sum to 0.

---

_Question 10)_

**Suppose you have N eggs and you want to determine from which floor in a K-floor building you can drop an egg such that it doesn't break. You have to determine the minimum number of attempts you need in order find the critical floor in the worst case while using the best strategy.There are few rules given below.** 

    An egg that survives a fall can be used again.
    A broken egg must be discarded.
    The effect of a fall is the same for all eggs.
    If the egg doesn't break at a certain floor, it will not break at any floor below.
    If the eggs breaks at a certain floor, it will break at any floor above.

    Input:
    The first line of input is  T denoting the number of testcases.Then each of the T lines contains two positive integer N and K where 'N' is the number of eggs and 'K' is number of floor in building.

    Output:
    For each test case, print a single line containing one integer the minimum number of attempt you need in order find the critical floor.

    Constraints:
    1<=T<=30
    1<=N<=10
    1<=K<=50

    Example:
    Input:
    2
    2 10
    3 5

    Output:
    4
    3

---