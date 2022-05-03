d = {a: a for a in range(10) }

d[0] = (0, 1, 2,)
d[1] = '123'


for key in d: 
    if isinstance(d [key], str): 
        print('Да, это строка')
        print(d[key])
