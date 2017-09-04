mod = 109546051211

fact = 1
result = 1
n = input()

for i in range (1, n+1):
    fact = (fact*i)%mod
    result = (result*fact)%mod
    if result == 0:
        break

print result