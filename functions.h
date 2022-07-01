// Functions

// teacher class methods
void teacher::set_data() {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter last name: ";
	cin >> last_name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter course name: ";
	cin >> course_name;
}
void teacher::get_data() {
	cout 
	<< name << " " << last_name 
	<< " (age: " << age << ") " 
	<< course_name 
	<< " list of students:\n";
	for(auto x:students)
		cout << " " << x << endl;
}
// student class methods
void student::set_data() {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter last name: ";
	cin >> last_name;
	cout << "Enter age: ";
	cin >> age;
}
void student::get_data() {
	cout 
	<< name << " " << last_name 
	<< " (age: " << age << ") " 
	<< "list of courses:\n";
	for(auto x:courses) 
		cout << " " << x << endl;
}
// my functions
void setCourses(student students[], int s, teacher teachers[], int t) {
	int i, add = 1, 
	n; // for choosing element in teacher object array
	string studentName, teacherData;
	cout << "List of courses:\n";
	for(i = 0; i < t; i++) 
		cout << " course " << i+1 << ": " << teachers[i].course_name << endl;
	while(add) {
		n = 0;
		studentName = "";
		teacherData = "";
		cout << "Enter number of course ";
		cin >> n;
		if(n <= 0 || n > t) {
			cout << "There's no course with entered number!";
			break;
		} else {
			teacherData = teachers[n-1].course_name + "," + teachers[n-1].name + " " + teachers[n-1].last_name;
			students[s].courses.push_back(teacherData);
			studentName = students[s].name + "_" + students[s].last_name;
			teachers[n-1].students.push_back(studentName);
		}
		cout << "Want to add? (Yes:1 , No:0) ";
		cin >> add;
	}
}



