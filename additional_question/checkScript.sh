gcc -c *.c
echo "Checking Answers for student 1"
gcc -o check checkAnswers.c student1.c
./check
echo "Checking Answers for student 2"
gcc -o check checkAnswers.c student2.c
./check
echo "Checking Answers for student 3"
gcc -o check checkAnswers.c student3.c
./check
rm *.o
rm check