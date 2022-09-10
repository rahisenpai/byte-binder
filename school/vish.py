from pygame import mixer

mixer.init()
mixer.music.load ('01 Khamoshiyan - Khamoshiyan (Arijit Singh) 190Kbps.mp3')
mixer.music.play()

while(1):
    print('type stop to turn off')
    q = input ('')
    if q == 'stop' or 'STOP' or "Stop":
        mixer.music.stop()
    else:
        print('try again')
