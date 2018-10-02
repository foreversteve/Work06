#include <stdio.h>
#include <stdlib.h>

typedef struct stud *student;
struct stud{
	int age;
	char *gender;
	char *name;
};

student new_student(int age, char *gender, char *name){
	student s = malloc(sizeof(struct stud));
	s -> age = age;
	s -> gender = gender;
	s -> name = name;
	return s;
	// struct stud a;
	// a.age -> age;
	// a.gender -> gender; 
	// a.name -> name;
	//return a;
}

void addage(student s){
	s -> age += 1;
}

int get_age(student s){
	return s -> age;
}

char *get_name(student s){
	return s->name;
}

char *get_gender(student s){
	return s -> gender;
}

int main(){

	char s[] = "Bob";
	char g[] = "Male";
	student Bob = new_student(17,g,s);

	printf("%s\n", "Age of Student:");
	printf("%d\n",get_age(Bob));
	// printf("\n");

	addage(Bob);
	printf("%s\n", "New Age of Student:");
	printf("%d\n",get_age(Bob));
	// printf("\n");

	printf("%s\n", "Name of Student:");
	printf("%s\n",get_name(Bob));
	// printf("\n");
	
	printf("%s\n", "Gender of Student:");
	// printf("\n");
	printf("%s\n",get_gender(Bob));


	free(Bob);
	return 0;
}