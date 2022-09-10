# sorting records by marks
import mysql.connector as ms
cn=ms.connect(host='localhost', user='root', passwd='abc123', database='sample')
if cn.is_connected()==False:
    print('error connecting to databse')
cr=cn.cursor()
cr.execute("select * from student order by marks")
a=cr.fetchall()
for i in a:
    print(i)
cn.close()
