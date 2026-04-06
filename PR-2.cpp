#include<stdio.h>

int main()
{
	int marks;
	char grade;
	
	printf("enter your score (0-100):");
	scanf("%d\n",marks);
	 
	grade = (marks >= 90) ?'A':
		    (marks >= 80) ?'B':
		    (marks >= 70) ?'C':
			(marks >= 60) ?'D':
			(marks >= 50) ?'F':
			
	printf("\nyour grade is %c" , grade);


switch(grade) {
	case 'A':
		printf("Excellent Work");
		break;
	case 'B':
		printf("Well Done");
		break;
	case 'C':
		printf("Good Job");
		break;
	case 'D':
		printf("You passed but you could do better");
		break;
	case 'F':
		printf("You Failed");
		break;	
}

if(grade >= 'A' && grade <= 'D'){
		printf("You are eligible for next level.");
}else{
		printf("Please try again next exam.");
    }
return 0;
}

/*
output :- enter your score (0-100):99
*/
