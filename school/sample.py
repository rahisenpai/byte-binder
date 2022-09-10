# menu driven
def reda():
    f=open('stud.txt')
    f.seek(0)
    s=f.read()
    print(s)
def wr():
    f=open('stud.txt','a+')
    n=int(input('No. records you want to enter: '))
    for i in range(0,n):
        r=int(input('Enter roll no.: '))
        n=input('Enter name: ')
        m=int(input('Enter marks: '))
        f.write(str(r)+' '+n+' '+str(m)+'\n')
    f.close()
def delt():
    f=open('stud.txt')
    f1=open('temp.txt','w+')
    n=int(input('Roll no. record u want te delete: '))
    s=''
    while s:
        s=f.readline()
        if s[0]!=n:
            f1.write(s)
    f.close()
    f1.close()

while(1):
    print('\tMENU-DRIVEN PROGRAM\n1 Read\n2 Append\n3 Delete')
    a=int(input('Enter your choice: '))
    if a==1:
        reda()
    elif a==2:
        wr()
    elif a==3:
        delt()
