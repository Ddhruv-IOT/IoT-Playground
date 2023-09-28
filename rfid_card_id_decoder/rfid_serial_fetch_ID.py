import serial as sr
ser = sr.Serial('COM14', 9600, timeout=1)

while True:
    print("Card ID data: ")
    # Firmware Version: 0x92 = v2.0
    print(ser.readline().decode())
