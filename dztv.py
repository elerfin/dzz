from os import remove


tv = ['СТС', 'ТНТ', 'CПАС', 'НТВ']

print (tv)

tv_copy = tv.copy()

tv.extend(tv_copy)
print (tv)

tvdict = dict.fromkeys(tv)
tv2 = list(tvdict)
print (tv2)

