import keyboard
import socket
import time
print('Enter the IP address of the device:')
ip=input()
while(True):
    if(keyboard.is_pressed('w')):
        s=socket.socket()
        s.connect((ip,12345))
        str=s.recv(1024).decode();
        print(str)
        s.sendall('1'.encode())
        s.close()
        time.sleep(0.5)
    elif(keyboard.is_pressed('d')):
        s=socket.socket()
        s.connect((ip,12345))
        str=s.recv(1024).decode();
        print(str)
        s.sendall('2'.encode())
        s.close()
        time.sleep(0.5)
    elif(keyboard.is_pressed('a')):
        s=socket.socket()
        s.connect((ip,12345))
        str=s.recv(1024).decode();
        print(str)
        s.sendall('3'.encode())
        s.close()
        time.sleep(0.5)
    elif(keyboard.is_pressed('s')):
        s=socket.socket()
        s.connect((ip,12345))
        str=s.recv(1024).decode();
        print(str)
        s.sendall('4'.encode())
        s.close()
        time.sleep(0.5)
    elif(keyboard.is_pressed('0')):
        s=socket.socket()
        s.connect((ip,12345))
        str=s.recv(1024).decode();
        print(str)
        s.sendall('0'.encode())
        s.close()
        time.sleep(0.5)
