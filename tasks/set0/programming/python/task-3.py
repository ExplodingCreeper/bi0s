rows = 5
for i in range(rows):
    for j in range(4-i):
        print(" ", end="")
    for k in range(0,i+1):
        print("*", end=" ")
    print()