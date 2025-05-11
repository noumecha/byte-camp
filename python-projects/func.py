def somme(a, b=7):
    return a + b
c = somme(8)
d = somme (9, 10)
print(c,d)
def diff(x, y):
    return x - y
e = diff(y=c, x=d)

def fonc(*args):
    print(args)
fonc(["html","js","css","python","php","java","C++"], 77, "noumel")
def fonc0(**kwargs):
    print(kwargs)
fonc0(l=['dss','ddd','66'], n=67, name="spaker")
#### Another rich function

def stat(*args):
    som = 0
    for j in args:
        som += j
        #print(j)
    maxi = max(args)
    mini = min(args)
    t = (som,maxi,mini)
    return t
print(stat(10,23,45,200,0,4,-30))

def multi(l):
    try:
        som = 0
        lists = []
        for k in l:
            lists.append(int(k))
        for i in lists:
            som += i
        maxi = max(lists)
        mini = min(lists)
        t = (som,maxi,mini)
        return t
    except Exception as e:
        print(f'somme error occurs : {e}')
print(multi([40,40,5,6,200,150,"23"]))