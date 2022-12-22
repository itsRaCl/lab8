#include "answer.h"

int main()	{
	int correctAnswer[4] ={5, 10, 0, 4};

	for (int i=1; i<=4; i++){
		if (correctAnswer[i-1]==answer(i)){
			printf("Question %d: Correct\n", i);
		}else {
			printf("Question %d: Wrong\n", i);
		}
	}
}