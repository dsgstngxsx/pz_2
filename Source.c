#include <stdio.h>
#include <string.h>
#include <conio.h>

#define STUDENT struct student
#define AEROFLOT struct aeroflot
#define students 10
#define flight 3


int main()
{
	tasks();
	return 0;
}

int tasks(void)
{
	int num;
	printf("\nnum: ");
	if (scanf("%d", &num) != NULL)

		switch (num)
		{
		case 0:
			exit(0);
		case 1:
			t1(); tasks();
		case 2:
			t2(); tasks();
		case 3:
			t3(); tasks();
		case 4:
			t4(); tasks();
		case 5:
			t5(); tasks();
		default:
			break;
		}
}
int t1()
{
	STUDENT
	{
		char surname[10];
		int group;
		int grade[5];
	};
	int k = 0;
	STUDENT p[students];
	for (int i = 0; i < students; i++)
	{
		puts("\nEnter your surname: ");
		scanf("%s", &p[i].surname);
		puts("Enter your group: ");
		scanf("%ld", &p[i].group);
		puts("Enter your grade (1..5): ");
		for (int j = 0; j < 5; j++)
		{
			scanf("%ld", &p[i].grade[j]);
		}
	}
	puts("\nStudent's average grade is 4.0: ");
	for (int i = 0; i < students; i++)
	{
		float all_marks = 0;
		for (int j = 0; j < 5; j++)
		{
			all_marks += p[i].grade[j];
		}
		float average_grade = all_marks / 5;

		if (average_grade > 4.0)
		{

			printf("\nSurname: %s \n", p[i].surname);
			printf("Group: %ld \n", p[i].group);
			k++;

		}
	}
	if (k == 0)
	{
		puts("There are no students with 4.0");
	}
}
int t2()
{
	STUDENT
	{
		char surname[10];
		int group;
		int grade[5];
	};
	int k = 0;
	STUDENT p[10];
	for (int i = 0; i < students; i++)
	{
		puts("\nEnter your surname: ");
		scanf("%s", &p[i].surname);
		puts("Enter your group: ");
		scanf("%ld", &p[i].group);
		puts("Enter your grade (1..5): ");
		for (int j = 0; j < 5; j++)
		{
			scanf("%ld", &p[i].grade[j]);
		}
	}
	puts("\nStudents with 4 and 5: ");
	for (int i = 0; i < students; i++)
	{
		float marks = 0;
		for (int j = 0; j < 5; j++)
		{
			if (p[i].grade[j] == 4 || p[i].grade[j] == 5)
			{
				marks == 0;
			}
			else
			{
				marks++;
			}
		}
		if (marks == 0)
		{
			printf("\nSurname: %s \n", p[i].surname);
			printf("Group: %ld \n", p[i].group);
			k++;
		}
	}
	if (k == 0)
	{
		puts("There are no students with 4 and 5");
	}
}
int t3() 
{
	STUDENT
	{
		char surname[10];
		int group;
		int grade[5];
	};
	int k = 0;
	STUDENT p[10];
	for (int i = 0; i < students; i++)
	{
		puts("\nEnter your surname: ");
		scanf("%s", &p[i].surname);
		puts("Enter your group: ");
		scanf("%ld", &p[i].group);
		puts("Enter your grade (1..5): ");
		for (int j = 0; j < 5; j++)
		{
			scanf("%ld", &p[i].grade[j]);
		}
	}
	puts("\nStudents with 2: ");
	for (int i = 0; i < students; i++)
	{
		int marks = 0;
		for (int j = 0; j < 5; j++) 
		{
			if (p[i].grade[j] == 2)
			{
				marks++;
			}
		}
		if (marks != 0)
		{
			printf("\nSurname: %s \n", p[i].surname);
			printf("Group: %ld \n", p[i].group);
			k++;
		}	
	}
	if (k == 0)
	{
		puts("There are no students with 2");
	}
}
int t4() 
{
	AEROFLOT
	{
		char flight_d[30];
		int flight_num;
		char type_of_airplane[20];
	};
	AEROFLOT a[flight];
	char ur_fl_d[30];
	int k = 0;
	for (int i = 0 ; i < flight; i++)
	{
		puts("\nEnter flight destination: ");
		scanf("%s", &a[i].flight_d);
		puts("Enter flight number: ");
		scanf("%ld", &a[i].flight_num);
		puts("Enter type of airplane: ");
		scanf("%s", &a[i].type_of_airplane);
	}
	puts("Enter YOUR flight destination: ");
	scanf("%s", &ur_fl_d);
	for (int i = 0; i < flight; i++)
	{
		char *f1 = a[i].flight_d;
		char *f2 = ur_fl_d;
		if (strcmp(f1,f2) == 0)
		{
			puts("\nThe flight number: ");
			printf("%d", a[i].flight_num);
			puts("\nThe type of airplane: ");
			printf("%s", a[i].type_of_airplane);
			k++;
		}
	}
	if (k == 0)
	{
		puts("There are no flights..");
	}
}
int t5()
{
	AEROFLOT
	{
		char flight_d[30];
		int flight_num;
		char type_of_airplane[20];
	};
	AEROFLOT a[flight];
	char ur_type[30];
	int temp;
	int k = 0;
	for (int i = 0; i < flight; i++)
	{
		puts("\nEnter flight destination: ");
		scanf("%s", &a[i].flight_d);
		puts("Enter flight number: ");
		scanf("%ld", &a[i].flight_num);
		puts("Enter type of airplane: ");
		scanf("%s", &a[i].type_of_airplane);
	}
	puts("Enter YOUR type of airplane: ");
	scanf("%s", &ur_type);
	for (int i = 0; i < flight; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (strcmp(a[j].flight_d, a[i].flight_d) > 0)
			{
				AEROFLOT temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < flight; i++)
	{
		char* f1 = a[i].type_of_airplane;
		char* f2 = ur_type;
		if (strcmp(f1, f2) == 0)
		{
			puts("\nThe flight number: ");
			printf("%d", a[i].flight_num);
			puts("\nThe flight destination: ");
			printf("%s", a[i].flight_d);
			k++;
		}
	}
	if (k == 0)
	{
		puts("There are no flights..");
	}
}
