# cook your dish here
t = int(input())
for i in range(t):
    a,b = input().split(" ")
    a = int(a)
    b = int(b)
    if(a%b==0 and (a/b)%2==0):
            print("Yes")
    else:
        print("No")