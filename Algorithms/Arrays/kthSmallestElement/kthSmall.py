#Python program to find the kth smallest element from a list
#Without doing sorting


''' Eg: list is 61, 32, 80, 59, 20
    When sorted: 20, 32, 59, 61, 80
    3rd smallest element is: 59'''

N = int(input('Enter size of list: '))

print('Enter elements in list: ')
l = [int(x) for x in input().split()]

K = int(input('kth element to search: '))
x = max(l)+1
ch = [0] *x

for j in range(0, N):
    ch[l[j]] += 1
for j in range(0, len(ch)):
    if ch[j] >= 1:
        K -= 1
    if K == 0:
        print('Element is: ', j)
        break