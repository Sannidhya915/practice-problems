a = [1,2,10,10,5,7,9,6]
largest = a[0]
slargest = -1

for x in a:
    if x > largest:
        largest = x

for x in a:
    if (x != largest ) and (x >slargest):
        slargest = x

print(largest)
print(slargest)