flag, pi = True, 0
for i in range(1,10000,2):
    if flag:
        pi += 1/i
    else:
        pi -= 1/i
    flag = not flag
print(pi*4)