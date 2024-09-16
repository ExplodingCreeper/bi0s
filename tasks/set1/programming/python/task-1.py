n=int(input("Enter the number of Dungeons: "))
li=input("Enter the list of Dungeons and their states(0 or 1) seperated by spaces: ")
l=li.split()
l=[int(e) for e in l]
print(l)
x=0
for i in range(n):
    if l[i] == 1:
        x+=1
        for k in range(len(l)):
            l[k] = 1 - l[k]
print(x)