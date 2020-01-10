#include <stdio.h>
#include <student.h>

void printstud(student* stud)
{
	printf("Name: %s %s\n", stud->fn, stud->ln);
	printf("Age: %d\n", stud->age);
	printf("id: %d\n", stud->id);
}

void enterstud(student* stu)
{
	printf("First name: ");
  scanf("%s", stu->fn);

	printf("Last name: ");
  scanf("%s", stu->ln);

	printf("Age: ");
  scanf("%d", &(stu->age));

	printf("Student id: ");
  scanf("%d", &(stu->id));
}


