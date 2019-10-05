# -*- coding: utf-8 -*-
"""
Created on Sat Oct 21 14:47:25 2019

@author: Sefira Karina
"""

data = [50, 17, 72, 12, 23, 54, 76, 9, 14, 19, 0, 0, 67]

def bfs(data, x, i):
    if i <= len(data):
        # print ("i= ",i)
        q = []
        temp = i
        for y in range(i):
            # print (temp)
            q.append(data[temp - 1])
            if len(data) > temp:
                temp = temp + 1
            # print (q)
        for y in range(i):
            print("check", q[y])
            if q[y] == x:
                print("yay", x, "is found")
                return i

        print("change row")
        q.clear()
        result = bfs(data, x, i * 2)
        if result != -1:
            return result
        return -1
    else:
        return -1

#x is the number to be found
bfs(data,54,1)