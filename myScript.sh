gcc -c file1.c linearSearch.c
gcc -o output file1.o linearSearch.o
echo "Compilation Completed running program\n"
./output
rm output
rm *.o