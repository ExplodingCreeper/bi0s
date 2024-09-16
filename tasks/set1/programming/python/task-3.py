test_case = int(input("Enter the number of test cases: "))
for t in range(test_case):
    n = int(input("Enter the number of trees: "))
    state = input("Enter the state of trees(0 or 1) seperated by spaces: ").split()
    state=[int(e) for e in state]
    max_dist = 0
    current_dist = 0
    for x in state:
        if x==1:
            if current_dist > max_dist:
                max_dist = current_dist
            current_dist = 0
        else:
            current_dist+=1
    if current_dist > max_dist:
        max_dist = current_dist
    print(max_dist)

