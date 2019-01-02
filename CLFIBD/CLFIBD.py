from collections import Counter

# read the number of inputs
for t in range(int(input())):
    #read the string
    S = input()
    f = [y for x,y in Counter(S).most_common()]
    # most_common() give the list in sorted order (highest to lowest)
    # we need the order in lowest to highest

    f = f[::-1]
    # check the condition of the first 2 elements and swap if required
    if len(f) > 3 and f[3]!=f[2]+f[1]:
        f[0],f[1] = f[1],f[0] # swap the elements

    # check the condition is met

    flag = True
    flag = len(f) < 3 or all(f[i]==f[i-1]+f[i-2] for i in range(2,len(f)))
    print("Dynamic" if flag else "Not")
