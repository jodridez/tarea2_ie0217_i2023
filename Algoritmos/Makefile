# Especifica el nombre del archivo ejecutable que se creará
TARGET = main.exe

# Especifica los archivos fuente necesarios para crear el archivo ejecutable
MAIN_SRC = mainSort.cpp
HEADER_SRC = headerSort.cpp

# Regla para compilar y vincular el programa
all: $(MAIN_SRC) $(HEADER_SRC)
	g++ $(MAIN_SRC) $(HEADER_SRC) -o $(TARGET)

# Regla para ejecutar el programa
run: all
	./$(TARGET)
