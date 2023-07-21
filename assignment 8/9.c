#include <stdio.h>
#include <string.h>

struct stud {
	char name[25];
	int age;
	float mark;
};

int main() {
    struct stud w={"Bill",17,91.6};
	struct stud *ptr;
	ptr=&w;
	printf("Information by '.' operator:");
	struct stud q={"Jack",15,95.11};
	printf("\nName=%s\nAge=%d\nMarks=%f",q.name,q.age,q.mark);
	printf("\n\nInformation by '->' operator:");
	printf("\nName=%s",ptr->name);
	printf("\nAge=%d",ptr->age);
	printf("\nMarks=%f",ptr->mark);
	return 0;
}
