# menu driven to read and write
'''def reda():
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
while(1):
    print('\tMENU-DRIVEN PROGRAM\n1 Read\n2 Append\n')
    a=int(input('Enter your choice: '))
    if a==1:
        reda()
    elif a==2:
        wr()'''
with open('stud.txt') as f:
    l,n,s=[],int(input('Roll no. record u want te delete: ')),''
    while f:
        s=f.readline()
        print(s[0])
        if s[0]!=n:
            l.append(s)
        else:
            print('deleted record : ',s)
    print('record not found')
    print(l)


