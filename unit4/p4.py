def random():
    return 4

print("hello, world")
print(random())

for i in range(1, 11, 2):
    print(i)

x = 42
x = 'B'
x = 3.14

nums = [1,2,3,4,5]
nums_size = len(nums)

for i in range(nums_size):
    print(nums[i])

for num in nums:
    print(num)

num1 = input("Num 1: ")
num2 = input("Num 2: ")

if num1 > num2:
    print("A is greater")
elif num1 < num2:
    print("B is greater")
else:
    print("Equal")
