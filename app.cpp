#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "classes.h"
#include "functions.h"

int main()
{
	int i, action, quit=0,
	t, // numbers of teachers 
	s; // numbers of students
	cout << "How many teachers? ";
	cin >> t;
	teacher teachers[t];
	for(i = 0; i < t; i++) {
		cout << " Teacher #" << i+1 << " :\n";
		teachers[i].set_data();
	}
	cout << "\nHow many students? ";
	cin >> s;
	student students[s];
	for(i = 0; i < s; i++) {
		cout << " Student #" << i+1 << " :\n";
		students[i].set_data();
		setCourses(students, i, teachers, t);
	}
	cout << "\n*** All Data has been set ***\n";
	
	while(!quit) {
		cout << "\nChoose an action:\n 1-Show teachers info\n 2-Show students info\n";
		cin >> action;
		switch(action) {
			case 1:
			for(i = 0; i < t; i++) {
				cout << "\n Teacher #" << i+1 << " :\n";
				teachers[i].get_data();
			}
			break;
			case 2:
			for(i = 0; i < s; i++) {
				cout << "\n Student #" << i+1 << " :\n";
				students[i].get_data();
			}
			break;
			default: cout << "Unknown choice!";
		}
		cout << "Want to exit? (Yes:1 , No:0) ";
		cin >> quit;
	}
    
    return 0;
}

