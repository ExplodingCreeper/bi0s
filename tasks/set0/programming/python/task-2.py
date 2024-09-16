x=[2,34,53,67,23,89,24,65]
for i in range(len(x)):
    for n in range(len(x)-i-1):
        if x[n] > x[n+1]:
            x[n],x[n+1] = x[n+1],x[n]
print(x)
key=int(input('Enter the value you need to find in the list: '))
index=-1
for k in range(len(x)):
    if x[k]==key:
        index=k
        break
print("Index of element is: ",index)
