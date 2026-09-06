/*
Goal:
Structured data with struct
Arrays for storage and sorting
User input/output handling
Command-line user interface design

Features:
Add student with name, roll, and CGPA
Prevent duplicate roll numbers
View all students in alphabetical order by name
Search student by name or roll
Update student details (name, roll, CGPA)
Delete student record
Count total number of students
Gracefully handle invalid inputs

Sample Output:
Student Management System (X Students)
Prepared by: {Your Name}
Batch: 98(1st Shift) -- Roll: 35

1: Add Student
2: Delete Student
3: Find by Name
4: Find by Roll
5: Show All Students
6: Update Student
7: Count Students
8: Exit

Enter a choice:

Source: https://github.com/MirYeasirAbrar
*/

#include <iostream>
#include <string>
#include <format>


// need to keep track of total students.
// need switch for menu
// practice namespace separation. Maybe Create | View | Delete
namespace student {
	class student {
		int Roll{ 0 };
		int CGPA{ 0 };

	public:
		std::string name{ 0 };

	};
}

namespace student::create {

}

namespace student::view {
	void menue() {
		std::cout << std::format(
			R"(Prepared by: Name
				 Batch: stuedents - roll
				1: Add Student
				2: Delete Student
				3: Find by Name
				4: Find by Roll
				5: Show All Students
				6: Update Student
				7: Count Students
				8: Exit

				Enter a choice:)"
		);

		switch (0) {
		case 1:
			// Do other scope stuff
			break;
		case 2:
			//
			break;
		case 3:
			//
			break;
		case 4:
			//
			break;
		case 5:
			//
			break;
		}

	}
}

namespace student::del {

}


//add in variable for namespace alias to future-proof
void Exercise08() {
	student::student Guy1;
	std::cin >> Guy1.name;
	std::cout << Guy1.name;
	student::view::menue();

}