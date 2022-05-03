list = [0]
print(list)
list.pop(0)

try:
    list.pop(0)
except IndexError:
    print('no element - 0')
print(list)