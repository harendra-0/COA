import random
import time


n = int(input())



a=[]

for i in range(n):

    col = []

    for j in range(n):

        x = random.uniform(0.0, 256.0)

        col.append(x)

    a.append(col)





b=[]

for i in range(n):

    col = []

    for j in range(n):

        y = random.uniform(0.0, 256.0)

        col.append(y)

    b.append(col)





c= [[0]*n]*n


begin = time.time();

for i in range(n):

    for j in range(n):

        c[i][j] = 0

        for k  in range(n):

            c[i][j] += a[i][k]*b[k][j]

        #print(c[i][j], end = " ")

    #print('\n')
end = time.time();
print(end-begin)
