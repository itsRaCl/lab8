gcc -c file1.c linearSearchR2L.c
gcc -o output file1.o linearSearchR2L.o
echo "Compilation Completed running program\n"
./output
rm output
rm *.o