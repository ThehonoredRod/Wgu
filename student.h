#pragma once

#define RESET   "\033[0m"   // Reset color
#define BOLDPURPLE "\033[1m\033[95m" // Bright Purple color
#define RED "\x1B[91m"           // Bright Red color
#define BOLDORANGE "\033[1m\033[93m" // Bright Orange color


//Below Enum Class allows  print function to print individual items for each Student
enum class printItemEnum { STUDENTID, FIRSTNAME, LASTNAME, EMAIL, AGE, DEGREEPROGRAM, DAYSTOCOMPLETE, ALL };

//Below array allows translation from the degreeProgram Enum to a string output
static const string degreeProgramStrings[] = { "Security", "Network", "Software", "None" };

	class student
	{
	private:
		int age;
		degreeProgramEnum degreeProgram;
		string studentID, firstName, lastName, email;
		vector<int> daysToComplete;

	public:
		//accessor functions
		string getStudentID() const;
		string getFirstName() const; 
		string getLastName() const; 
		string getEmailAddress() const; 
		int getAge() const; 
		degreeProgramEnum getDegreeProgram() const;
		vector<int> getdaysToComplete() const; 

		//mutator functions
		void setStudentID(string studentID);
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setEmailAddress(string email);
		void setAge(int age);
		void setDegreeProgram(degreeProgramEnum degreeProgram);
		void setdaysToComplete(vector<int> daysToComplete);

		//contructor function
		student(
			string StudentID = "NEW",
			string firstName = "NEW",
			string lastName = "NEW",
			string email = "NEW",
			int age = 0,
			vector<int> daysToComplete = { 0, 0, 0, 0 },
			degreeProgramEnum degreeProgram = degreeProgramEnum::NONE);

		//print function
		void print(printItemEnum printItem) const;

		//destructor function
		~student();
	};