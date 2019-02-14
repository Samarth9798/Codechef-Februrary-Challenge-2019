T = int(input())
while T:
    N = int(input())
    a = list(map(int,input().split()))
    d = list(map(int,input().split()))
    
    c = []
    
    for i in range(0,N):
        if i == 0:
            if a[N - 1] + a[i + 1] < d[i]:
                c.append(d[i])
        else:
            if a[i - 1] + a[int((i + 1)%N)] < d[i]:
                c.append(d[i])
    ans = -1
    for i in range(0,len(c)):
        if c[i] > ans:
            ans = c[i]
    print(ans)
    T-=1
