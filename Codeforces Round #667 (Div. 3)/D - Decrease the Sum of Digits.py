from math import *
t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    if(sum(map(int,str(a)))<=b):
        print(0)
        continue
    if(int(str(a)[0])<b):
        s = int(str(a)[0])
        for i in range(len(str(a))-1):
            s+=int(str(a)[i+1])
            if(s>=b):
                print(10**(len(str(a))-i-1)-a%(10**(len(str(a))-i-1)))
                break
        else:
            print(0)
    else:
        print(10**len(str(a))-a)
