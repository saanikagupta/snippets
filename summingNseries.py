c=int(input())
for i in range(c):
    n=int(input())
    S=0
    for j in range(1,n+1):
        T=(j**2)-((j-1))**2
        S+=T
    print(S%((1e9)+7))
