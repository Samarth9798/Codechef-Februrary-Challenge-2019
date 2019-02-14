T = int(input())
while T:
    N = int(input())
    A = list(map(int,input().split()))
    sum_of_Ai = 0
    for i in range(0,N):
        sum_of_Ai += A[i]
    ans = sum_of_Ai - N + 1
    print(ans)
    T-=1
