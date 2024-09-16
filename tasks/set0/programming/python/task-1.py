x=input("Enter the string: ")

ls = []
c = []
for l in x:
    found = False
    for i in range(len(ls)):
        if ls[i]==l:
            c[i]+=1
            found=True
            break
    if not found:
        ls+=[l]
        c+=[1]

print(ls)
print(c)

for i in range(len(x) - 1, -1, -1):
    print(x[i],end="")
