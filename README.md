# Student Record System (C)

This program is a dynamic student record system written in C. It demonstrates the use of:
- Structures
- Pointers
- Dynamic memory allocation (`malloc`)
- Sorting and updating records

## Features

- Add student records (Name, Roll No, GPA)
- Display all student records
- Update a student's GPA using their roll number
- Sort and display students by GPA (descending order)

## How to Compile and Run

1. Open terminal in the folder where the file is saved.
2. Compile the program:
```bash
gcc student_record_system.c -o student_record_system
```

3. Run the program:
```
./student_record_system
```

Sample Output
```
Enter number of students: 2
Enter data for student 1:
Name: Leonardo DiCaprio
Roll No: 101
GPA: 3.8
Enter data for student 2:
Name: Jennifer Lawrence
Roll No: 102
GPA: 3.5

Student Records:
Name: Leonardo DiCaprio, Roll No: 101, GPA: 3.80
Name: Jennifer Lawrence, Roll No: 102, GPA: 3.50

Enter roll number to update GPA: 102
Enter new GPA: 3.9

Updated Records:
Name: Leonardo DiCaprio, Roll No: 101, GPA: 3.80
Name: Jennifer Lawrence, Roll No: 102, GPA: 3.90

Sorted by GPA (Descending):
Name: Jennifer Lawrence, Roll No: 102, GPA: 3.90
Name: Leonardo DiCaprio, Roll No: 101, GPA: 3.80
```
