N, H = map(int, input().split())

A = list(map(int, input().split()))

brinquedos_pode_ir = 0

for i in range(N):
    if H >=  A[i]:
        brinquedos_pode_ir += 1

print(brinquedos_pode_ir)
