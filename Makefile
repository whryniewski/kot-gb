BIN=/Users/whr/Projects/gameboy/gbdk-n/bin/
OBJ=./obj

build:
	mkdir -p $(OBJ)
	$(BIN)/gbdk-n-compile.sh kot.c -o $(OBJ)/kot.rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/kot.rel -o $(OBJ)/kot.ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/kot.ihx kot.gb

clean:
	rm -rf $(OBJ)
	rm -f kot.gb
