import socket
import serial
if name == ' main ':
    ser = serial.Serial('/dev/ttyso', 9600, timeout=1)
    ser.flush()
s = socket.socket()     # Create a socket object
host = ''               # Get local machine name
port = 12345            # Reserve a port for your service
s.bind((host, port))    # Bind to the port

s.listen (5)
while True:
    c, addr = s.accept() # Establish connection with client
    print ('Got connection from', addr)
    c.sendall('Thank you for connecting'.encode())
    op=c.recv(1024)
    ser.write(op)
    c.close()
    
s.close()
