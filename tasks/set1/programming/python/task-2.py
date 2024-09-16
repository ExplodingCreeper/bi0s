test_case=int(input("Enter the number of test cases: "))
for t in range(test_case):
    n=int(input("Enter the number of phone numbers: "))
    p=[input("Enter the phone number: ").strip() for k in range(n)]
    length=len(p[0])
    if any(len(c) != length for c in p):
        print(-1)
        continue
    pre_length=0
    max_pre_length=length//2
    for i in range(max_pre_length):
        current_char=p[0][i]
        if all(c[i]==current_char for c in p):
            pre_length+=1
        else:
            break
    print(pre_length)
        
