// Classes

class person {
	public:
	string name, last_name;
	int age;
};


class student: public person {
	public:
	vector <string> courses;
	void set_data();
	void get_data();
};


class teacher: public person {
	public:
	string course_name;
	vector <string> students;
	void set_data();
	void get_data();
};

