// Functions practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string last, first, middle;
	int students, studentNum = 1;
	int bill = 0, payment, change;
	int minimumSub = 0;
	bool chemistry = false, history = false, math = false, music = false, art = false, pe = false, it = false, biology = false;
	bool invalidSubject, additionalSub = true;
	char subjectChoice, againSub,againEnroll;
	bool enrollAgain = true,invalidAnswer = false;
	//Loop for another student
	do {
		minimumSub = 0;
		bill = 0;
		bool chemistry = false, history = false, math = false, music = false, art = false, pe = false, it = false, biology = false;
	//Start of Enrollment
	cout << "---------------Student Enrollment-----------------" << endl;
	cout << "                                                  " << endl;
	cout << "Enter name of student" << endl;
	//Last name of student
	cout << "Last name: ";
	getline(cin, last);
	//First name of student
	cout << "First name: ";
	getline(cin, first);
	//Middle name of student
	cout << "Middle name: ";
	getline(cin, middle);

	system("pause");
	system("cls");

	/*
	{
		cout << "Invalid number of students\n";
		cout << "Enter number of student enrollees (min: 2, max: 5): ";
		cin >> students;
	}
	*/
		//Avail additional subjects
		do {
			//Loop condition for minimum subject
			do {

				//Loop condition for invalid subject
				do {
					invalidSubject = false;
					//Subject Selection
					cout << "Enrollment for student " << "[" << studentNum << "]" << ": " << last << ", " << first << " " << middle << "\t" << "Subjects selected: " << minimumSub << "/5" << " [Total Bill: " << "$" << bill << "]" << endl;
					cout << "1. Chemistry          - $100" << endl;
					cout << "2. History            - $110" << endl;
					cout << "3. Mathematics        - $120" << endl;
					cout << "4. Music              - $130" << endl;
					cout << "5. Arts               - $140" << endl;
					cout << "6. Physical Education - $150" << endl;
					cout << "7. Programming        - $160" << endl;
					cout << "8. Biology            - $170" << endl;
					cout << "Enter number of chosen subject: ";
					cin >> subjectChoice;

					switch (subjectChoice)
					{
						//Select Chemistry
					case'1':
						//Chemistry already selected
						if (chemistry)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Chemistry as selected
						else
						{
							bill += 100;
							chemistry = true;
							cout << "Chemistry has been selected\n";
							minimumSub++;
						}
						break;
						//Select History
					case '2':
						//History already selected
						if (history)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark History as selected
						else
						{
							bill += 110;
							history = true;
							cout << "History has been selected\n";
							minimumSub++;
						}
						break;
						//Select Mathematics
					case'3':
						//Mathematics already selected
						if (math)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Mathematics as selected
						else
						{
							bill += 120;
							math = true;
							cout << "Mathematics has been selected\n";
							minimumSub++;
						}
						break;
						//Select Music
					case'4':
						//Music already selected
						if (music)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Music as selected
						else
						{
							bill += 130;
							music = true;
							cout << "Music has been selected\n";
							minimumSub++;
						}
						break;
						//Select Art
					case'5':
						//Art already selected
						if (art)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Art as selected
						else
						{
							bill += 140;
							art = true;
							cout << "Arts has been selected\n";
							minimumSub++;
						}
						break;
						//Select Physical Education
					case'6':
						//Physical Education already selected
						if (pe)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Physical Education as selected
						else
						{
							bill += 150;
							pe = true;
							cout << "Physical Education has been selected\n";
							minimumSub++;
						}
						break;
						//Select Programming
					case'7':
						//Programming already selected
						if (it)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Programming as selected
						else
						{
							bill += 160;
							it = true;
							cout << "Programming has been selected\n";
							minimumSub++;
						}
						break;
						//Select Biology
					case'8':
						//Biology already selected
						if (biology)
						{
							cout << "This subject has already been selected\n" << endl;
						}
						//Mark Biology as selected
						else
						{
							bill += 170;
							biology = true;
							cout << "Biology has been selected\n";
							minimumSub++;
						}
						break;
						//Invalid subject
					default:
						cout << "Invalid subject\n";
						invalidSubject = true;
						break;
					}
					//Loop condition for invalid subject
				} while (invalidSubject);

				//Prompts student to select another subject until minimum requirement is met
				if (minimumSub < 2)
				{
					cout << "Please select another subject\n";
				}
				//Loop condition for minimum subject
			} while (minimumSub < 2);

			if (minimumSub == 5)
			{
				cout << "Maximum number of subjects reached.\n";
				cout << "Proceeding to payment\n";
				break;
			}
			//Avail additional subjects
			cout << "Do you still want to avail a subject? (y/n)";
			cin >> againSub;
			if (againSub == 'n')
			{
				break;
			}
		//Avail additional subjects
		} while (additionalSub);

		//Payment procedures
		cout << "Your total bill is: $" << bill << endl;
		cout << "Enter payment: ";
		cin >> payment;
		change = payment - bill;

		//Ensures payment is sufficient
		while (change < 0)
		{
			cout << "Payment is insufficient, please pay again" << endl;
			cout << "Enter payment: ";
			cin >> payment;
			change = payment - bill;
		}
		//Display change 
		if (change > 0)
		{
			cout << "Your change is $" << change << endl;
			cout << "Thank you for enrolling!" << endl;
		}
		//When there is no change
		else
		{
			cout << "Thank you for enrolling!" << endl;
		}


		//Loop condition for invalid answer
		do {
			//Enrollment for another student
			cout << "Would you like to enroll another student?(y/n)";
			cin >> againEnroll;
			switch (againEnroll)
			{
			case 'y':
				invalidAnswer = false;
				break;
			case'n':
				enrollAgain = false;
				invalidAnswer = false;
			//Displays an error when invalid answer for enrollment again
			default:
				cout << "Invalid answer"<<endl;
				invalidAnswer = true;
				break;
			}
		//Loop condition for invalid answer
		} while (invalidAnswer);
		//Manages the student number counter
		studentNum++;
		//Allows user to enter another name for a new student
		cin.ignore();

		system("cls");
	//Loop for another student
	} while (enrollAgain);

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
