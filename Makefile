CC = cl
CFLAGS = /EHsc

TARGET = compiled.exe

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -Fe$(TARGET)

run: $(TARGET)
	$(TARGET)

clear:
	del .\*.exe
	del .\*.obj
	del .\src\*.exe
	del .\src\*.obj
	del .\src\*.ilk
	del .\src\*.pdb