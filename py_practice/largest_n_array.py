# Find the largest element in array
arr = [3,2,1,5,8,2,7]

largest = arr[0]

for x in arr:
    if x > largest:
        largest = x

print(largest)
