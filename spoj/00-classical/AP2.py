import sys

for _ in range(input()):
    third, third_last, total = map(int, raw_input().split())
    
    n = (2*total)/(third+third_last)
    r = (third_last - third)/(n - 5)
    
    print n
    out = ""
    first = third - 2*r
    for i in range(0, n): out += str(first+i*r) + " "
        
    print out