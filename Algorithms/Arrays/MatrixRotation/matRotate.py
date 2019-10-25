''' Rotation of a Square matrix at 90 degree clockwise.
    With the least complexity
    '''
l=[[1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]]

N = 4
x=N-1
y=x

#for square matrix 
for i in range(0, x):
    for j in range(i,x):
        l[j][x], l[i][j] = l[i][j], l[j][x]
        l[x][y], l[i][j] = l[i][j], l[x][y]
        l[y][i], l[i][j] = l[i][j], l[y][i]
        y -= 1
    x -= 1
    y=x



for i in l:
    print(i)
