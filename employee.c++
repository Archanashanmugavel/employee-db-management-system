#include <iostream>
#include <string>
using namespace std; 
struct Emp { 
 int empid; 
 string name; 
 string city; 
 int age;
 string mail_id; 
 long int phone; 
 float sal; 
}; 
void addEmp(Emp* database, int& numemp) {  cout << "Enter emp id: "; 
 cin >> database[numemp].empid;
 cout << "Enter Name: "; 
 cin >> database[numemp].name;  cout << "Enter City: "; 
 cin >> database[numemp].city;  cout << "Enter Age: "; 
 cin >> database[numemp].age;  cout << "Enter Mailid: ";  cin >> database[numemp].mail_id;
 cout << "Enter Phoneno: "; 
 cin >> database[numemp].phone; 
 cout << "Enter salary: "; 
 cin >> database[numemp].sal; 
 ++numemp; 
 cout << "Employee added successfully!" << endl; }
void displayemp(const Emp* database, int numemp) { 
 cout << "\nEmployee Database:\n"; 
 cout << "empid\tName\tCity\tAge\tMailid\tPhoneno\tSalary\n";  for (int i = 0; i < numemp; i++) { 
 cout << database[i].empid << "\t" << database[i].name << "\t" << database[i].city  << "\t" 
 << database[i].age << "\t" << database[i].mail_id << "\t" << database[i].phone  << "\t" 
 << database[i].sal << endl; 
 }
} 
void searchemp(const Emp* database, int numemp) {  int s; 
 cout << "Enter empid to search: "; 
 cin >> s; 
 bool found = false; 
 cout << "Employee Details:\n";
 for (int i = 0; i < numemp; i++) { 
 if (s == database[i].empid) { 
 cout << "empid\tName\tCity\tAge\tMailid\tPhoneno\tSalary\n"; 
 cout << database[i].empid << "\t" << database[i].name << "\t" <<  database[i].city << "\t" 
 << database[i].age << "\t" << database[i].mail_id << "\t" <<  database[i].phone << "\t" 
 << database[i].sal << endl; 
 found = true; 
 break;
 } 
 } 
 if (!found) { 
 cout << "Employee record not found!" << endl;  } 
} 
void calc(Emp* database, int numemp) {
 int s; 
 cout << "Enter empid to calculate the salary: ";  cin >> s; 
 for (int i = 0; i < numemp; i++) { 
 if (s == database[i].empid) { 
 float ta, pf; 
 cout << "Enter the TA amount: ";  cin >> ta;
 cout << "Enter the PF amount: "; 
 cin >> pf; 
 database[i].sal = database[i].sal - ta - pf; 
 cout << "Salary after deductions: " << database[i].sal << endl;  return; 
 } 
 } 
 cout << "Employee record not found!" << endl;
} 
int main() { 
 const int maxEmp = 100;  Emp empDB[maxEmp];  int numemp = 0; 
 int choice; 
 do {
 cout << "\nEmployee Management System\n";  cout << "1. Add employee\n"; 
 cout << "2. Display employee\n"; 
 cout << "3. Search employee\n"; 
 cout << "4. Calculate salary\n"; 
 cout << "5. Exit\n"; 
 cout << "Enter your choice: "; 
 cin >> choice;
 switch (choice) { 
 case 1: 
 addEmp(empDB, numemp);  break; 
 case 2: 
 displayemp(empDB, numemp);  break; 
 case 3:
 searchemp(empDB, numemp); 
 break; 
 case 4: 
 calc(empDB, numemp); 
 break; 
 case 5: 
 cout << "Exiting the program. Goodbye!\n";  break;
 default: 
 cout << "Invalid choice. Please enter a valid option.\n";  } 
 } while (choice != 5); 
 return 0; 
}
