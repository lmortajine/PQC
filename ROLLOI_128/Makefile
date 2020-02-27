CC=gcc

CFLAGS=-W -Wall
LDFLAGS=
EXEC= rollo

all: $(EXEC)

rollo:CryptoRAM.o utils.o matrix.o sha2.o randombytes.o rng_gf2mn.o gf2m.o gf2mn.o rollo_kem.o main.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)  

clean: rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)



