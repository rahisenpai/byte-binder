import rotatescreen
import time

s= rotatescreen.get_primary_dislpay()
for i in range(8):
    time.sleep(1)
    s.rotate_to(i*90 % 30)
    
