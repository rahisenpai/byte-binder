import pickle
def createfile():
    f=open('student.dat','ab')
    name=input('enter name:')
    rollno=int(input('enter roll no.:'))
    fee=int(input('enter fees:'))
    rec=[name,rollno,fee]
    pickle.dump(rec,f)
    f.close()
def disrec():
    f=open('student.dat','rb')
    try:
        while True:
            rec=pickle.load(f)
            if rec[2]>4000:
                print(rec)
    except EOFError:
        f.close()

createfile()
disrec()
        
        
        
