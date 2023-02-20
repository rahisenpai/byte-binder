def function(x):
    return (x**3+2)/(x**2+1)

def integrate(upper, lower, dx):
    area = 0
    x_cord = lower
    while x_cord <= upper:
        y_cord = function(x_cord)
        area += (y_cord*dx)
        x_cord += dx
    return area

start = int(input('start: '))
end = int(input('end: '))
area = integrate(end, start, 0.00001)
print(area)