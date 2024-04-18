# cook your dish here
test = int(input())
for i in range(test):
    a,b= map(int,input().split())
    c = a%10
    d = b%10
    a = a//10
    b = b//10
    if(b<=a and b<=c):
        if(d<=a and d<=c):
            print("No")
        else:
            print("Yes")
    else:
        print("Yes")