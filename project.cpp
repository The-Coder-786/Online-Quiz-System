#include<iostream>
#include<conio.h>
#include<string>
#include<cctype>
#include<fstream>

using namespace std;

struct quiz
{
    string question;
	string a;
	string b;
	string c;
	string d;
};
int main()
{
   char subjects;
   cout<<"             ----------------<<<<<<<<<<<<<<<<<<<<WELCOME TO ONLINE QUIZ >>>>>>>>>>>>>>>>>>>>----------------\n";
   	char choose;
	cout<<"\n''ONLY FOR TEACHER'S USE TO MAKE QUIZ''\t\t\t''FOR STUDENT'S USE TO TAKE QUIZ''"<<"\n\tPRESS 'T' IF YOU ARE TEACHER \t\t\tPRESS 'S' IF YOU ARE STUDENT\n\n\t\t\t\t\t\t";
	cin>>choose;
int password;
    	switch(toupper(choose))	
{
    case 'T':
	{
	int quiz_type;
	
	cout<<"\nTO IDENTIFY THAT YOU ARE A TEACHER, PLEASE ENTER THE PASSWORD:\n";
	cin>>password;
	if (password==403324)	{

	cout<<"\nPLEASE CHOOSE QUIZ TYPE\n1.  MULTIPLE CHOICES\n2. TRUE AND FALSE\n"<<endl;
	cout<<"\n\n"<<"PLEASE SELECT THE QUIZ ACCORDING TO THEIR NUMBERS PRESS 1 FOR 1ST QUIZ type"<<endl;
	cin>>quiz_type;}
	else{cout<<"\nSORRY, YOU ENTERED WRONG PASSWORD\n";
	}
	switch(quiz_type)
	{
	  case 1:
	  	{
	  	int quantity;
		cout<<"WRITE QUANTITY OF QUESIONS YOU WANT TO CREATE : ";
		cin>>quantity;
		char answer;
		char stu_answer;
		int marks=0;
		cout<<"\nMULTIPLE CHOICE"<<endl;  	
	  	quiz Qstion[quantity];
	  	
	    for(int i=0; i<quantity; i++)
	  	{
	  	cout<<" ";
		getline(cin,Qstion[i].question);
		
		cout<<"\nQUESTION NO  "<<i+1<<": ";
	  	getline(cin,Qstion[i].question);
		
		cout<<"\na: ";
		getline(cin,Qstion[i].a);
		
	  	cout<<"\nb: ";
	    getline(cin,Qstion[i].b);			  
			  
		cout<<"\nc: ";	  	
		getline(cin,Qstion[i].c);  		
	  		
	  	cout<<"\nd: ";
	  	getline(cin,Qstion[i].d);
		  
	    cout<<"\nSELECT RIGHT ANSWER: ";
		cin>>answer;  
		  }	
		system("CLS");
			
		for(int i=0; i<quantity; i++)
		{
		cout<<"\nQUESTION NO  "<<i+1<<": "<<Qstion[i].question;
		cout<<"\na: "<<Qstion[i].a;
		
	  	cout<<"\nb: "<<Qstion[i].b;
	   		  	  
		cout<<"\nc: "<<Qstion[i].c;	  	 		
	  		
	    cout<<"\nd: "<<Qstion[i].d;
		  
	    cout<<"\nSELECT RIGHT ANSWER: ";
		cin>>stu_answer;  
			
		if(answer==stu_answer)
		{
			marks++;
			cout<<"CORRECT ANSWER";
		} else
		{cout<<"FALSE ANSWER";}	
			}			  
		cout<<"\nYOU OBTAINED: "<<marks<<" OUT OF "<<quantity;  
	  		break;
		  }
	  case 2: 
			{
					int quantity;
		cout<<"WRITE QUANTITY OF QUESIONS YOU WANT TO CREATE : ";
		cin>>quantity;
		char answer;
		char stu_answer;
		int marks=0;
		cout<<"\n<<<<<<<<<<<<<<<<<<<<<<<<TRUE / FALSE>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;  	
	  	quiz Qstion[quantity];
	  	
	    for(int i=0; i<quantity; i++)
	  	{
	  	cout<<" ";
		getline(cin,Qstion[i].a);
		
		cout<<"\nQUESTION NO  "<<i+1<<": ";
	  	getline(cin,Qstion[i].question);
		  
	    cout<<"\nSELECT RIGHT ANSWER: ";
		cin>>answer;  
		  }	
		system("CLS");
			
		for(int i=0; i<quantity; i++)
		{	
	    cout<<"\nQUESTION NO  "<<i+1<<": "<<Qstion[i].question;
	
		  cout<<"\nSELECT RIGHT ANSWER: ";
		cin>>stu_answer;  
			
		if(answer==stu_answer)
		{
			marks++;
			cout<<"CORRECT ANSWER\n";	
		}
		 else
		 {
		 	cout<<"FALSE ANSWER\n";
		 }
			}			  
		cout<<"\nYOU OBTAINED: "<<marks<<" OUT OF "<<quantity;	  
			}
	  		break;	
	}

	break;
    }
   
   case 'S':
    	int x=0,sapid,course,quantity;
	string name;
	char ANS1,ANS2,ANS3,ANS4,ANS5,ANS6,ANS7,ANS8,ANS9,ANS10,ANS11,ANS12,ANS13,ANS14,ANS15,ANS16,ANS17,ANS18,ANS19,ANS20,ANS21,ANS22,ANS23,ANS24,ANS25,ANS26,ANS27,ANS28,ANS29,ANS30;
	cout<<"\nPLEASE ENTER YOUR NAME:\t";
	cin>>name;
	cout<<"\nENTER YOUR SAP_ID:\t";
	cin>>sapid;
	
	cout<<"\n\nthis quiz includes 5 courses\nevery subject includes 30 MCQS \nplease choose one of them which you want to take:\n\npress 0 for 'Programming Fundamentals' Quiz\npress 1 for 'Discrete Structure' Quiz\npress 2 for 'Applied Physics' Quiz\npress 3 for 'English Composition' Quiz\npress 4 for 'IICT' Quiz\n";
	cout<<"\n Enter the course number from 0 to 5 which you want to take:\t";
	cin>>course;
	system("CLS");
	cout<<"-----------------------------------------------------------------------------------------------------------------";
	switch(course)
	{
		case 0:cout<<"\n                                  ''PROGRAMMING FUNDAMENTALS (PF) QUIZ''                                                 ";
		
	cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
	cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
	cout<<"\nNAME:\t"<<name<<"\t\t\t\t\t\t\tSAP_ID:\t"<<sapid<<"\n";
	cout<<"_____________________\t\t\t\t\t\t__________________\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------\n";
	cout<<"ENTER THE QUANTITY OF THE QUESTIONS (5,10,15,30)\t";
	cin>>quantity;
	switch(quantity)
	{
		case 30:
		case 5:
	cout<<"\n\nQ: Write the correct answers from the following;\n";
		cout<<"__________________________________________________";
		cout<<"\n\n1. Who invented C++?\n a. Dennis Ritchie\n b. Ken Thompson\n c. Brian Kernighan\n d. Bjarne Stroustrup\n\nAnswer:\t";
cin>>ANS1;
if (ANS1=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"2. What is C++?\n a. C++ is an object oriented programming language\n b. C++ is a procedural programming language\n c. C++ supports both procedural and object oriented programming language\n d. C++ is a functional\n\nAnswer:\t";
cin>>ANS2;
if (ANS2=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"\n3. Which of the following correctly declares an array?\n a. int array[10];\n b. int array;\n c. array{10};\n d. array array[10];\n\nAnswer:\t";
cin>>ANS3;
if (ANS3=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"4. What is the index number of the last element of an array with 9 elements?\n a. 9\n b. 8\n c. 0\n d. Programmer-defined\n\nAnswer:\t";
cin>>ANS4;
if (ANS4=='b')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"5. What is the correct definition of an array?\n a. An array is a series of elements of the same type in contiguous memory locations\n b. An array is a series of element\n c. An array is a series of elements of the same type placed in non-contiguous memory locations\n d. An array is an element of the different type\n\nAnswer:\t";
cin>>ANS5;
if (ANS5=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
break;
case 10:
cout<<"\n    <---------------->\n"<<"6. Which of the following type is provided by C++ but not C?\n a. double\n b. float\n c. int\n d. bool\n\nAnswer:\t";
cin>>ANS6;
if (ANS6=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"7. What will be the output of the following C++ code?\n #include <iostream> \n #include <string> \n using namespace std; \n int main() \n { \n 	char s1[6] = ''Hello''; \n 	char s2[6] = ''World''; \n 	char s3[12] = s1 + " " + s2; \n 	cout<<s3; \n 	return 0; \n } \n\n a.  Hello\n b. World\n c. Error\n d. Hello World\n\nAnswer:\t";
cin>>ANS7;
if (ANS7=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"8.  Which of the following is used for comments in C++?\n a. /* comment */\n b. // comment */\n c. // comment\n d. both // comment or /* comment */	\n\nAnswer:\t";
cin>>ANS8;
if (ANS8=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"9.  Which of the translator program converts high level language into its equivalent machine language?\n a. Interpreter\n b. Linker\n c. Assembler\n d. Compiler\n\nAnswer:\t";
cin>>ANS9;
if (ANS9=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"10. Which of the language is said to be the high level language?\n a. C++\n b. Java\n c. C\n d. All the above\n\nAnswer:\t";
cin>>ANS10;
if (ANS10=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"11. Which of the following translates the source program statements into object codes?\n a. Debugger\n b. Interpreter (\n c. Assembler\n d. Compiler\n\nAnswer:\t";
cin>>ANS11;
if (ANS11=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"12. In flowchart rectangle symbol indicates:\n a. Input/Output\n b. Connector\n c. Process\n d. Decision\n\nAnswer:\t";
cin>>ANS12;
if (ANS12=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"13.C++ is a(n):\n a. Object-oriented programming language.\n b. Event-driven programming language.\n c. Structured programming language.\n d. None of these.\n\nAnswer:\t";
cin>>ANS13;
if (ANS13=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"14.The arithmetic operators are:\n a. Ternary operators\n b. Unary operators\n c. Binary operators\n d. None of these\n\nAnswer:\t";
cin>>ANS14;
if (ANS14=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"15.In switch structure, each case label may be an integer constant or:\n a. Real constant\n b. Character constant\n c. String constant\n d. None of these\n\nAnswer:\t";
cin>>ANS15;
if (ANS15=='b')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"marks:"<<x<<"\n";
break;
case 15:
cout<<"\n    <---------------->\n"<<"16.What will be the value of 'x' after executing for(x=1;x<=15;x++);?\n a. 15\n b. 1\n c. 14\n d. 16\n\nAnswer:\t";
cin>>ANS16;
if (ANS16=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"17.The pointers are used for implementing the concept of:\n a. Polymorphism\n b. Array\n c. Structure\n d. Inheritance\n\nAnswer:\t";
cin>>ANS17;
if (ANS17=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"18.The function stlen('ABC');will return value:\n a. 4\n b. ABC\n c. 3\n d. None of these\n\nAnswer:\t";
cin>>ANS18;
if (ANS18=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"19.The data item of a structured are called:\n a. Fields\n b. Elements\n c. Members\n d. All of these\n\nAnswer:\t";
cin>>ANS19;
if (ANS19=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"20.In C++,the functions of a class are called:\n a. Attributes\n b. Methods\n c. Member function\n d. Both a and b\n\nAnswer:\t";
cin>>ANS20;
if (ANS20=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"21. Each element of array of character occupies:\n a. one byte\n b. four bytes\n c. two bytes\n d. None of the above\n\nAnswer:\t";
cin>>ANS21;
if (ANS21=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"22.How many arithmetic operations can be performed on a pointer?\n a. 6\n b. 4\n c. 2\n d. 3\n\nAnswer:\t";
cin>>ANS22;
if (ANS22=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"23.The only integer that can be assigned directly to a pointer is:\n a. 2\n b. 0\n c. 1\n d. 3\n\nAnswer:\t";
cin>>ANS23;
if (ANS23=='b')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"24.Which of the following loop structure has test condition after the body of loop?\n a. do-while\n b. while\n c. for\n d. None\n\nAnswer:\t";
cin>>ANS24;
if (ANS24=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"25.Which of the following is a counter loop statement?\n a. do-while\n b. for\n c. while\n d. none\n\nAnswer:\t";
cin>>ANS25;
if (ANS25=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"26.How many relational oprerators in C++?\n a. 2\n b. 4\n c. 6\n d. 3\n\nAnswer:\t";
cin>>ANS26;
if (ANS26=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"27.Which of the following is a logical operator?\n a. =\n b. !=\n c. ==\n d. !\n\nAnswer:\t";
cin>>ANS27;
if (ANS27=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"28.A stream refers to:\n a. flow of data\n b. output statement\n c. input statement\n d. flow of program control709\n\nAnswer:\t";
cin>>ANS28;
if (ANS28=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<":"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"29.A person that can write a computer program is called:\n a. coder\n b. programmer\n c. analyst\n d. coordinator\n\nAnswer:\t";
cin>>ANS29;
if (ANS29=='b')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"marks:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"30.The extension of C++ source program is:\n a. ccp\n b. cpp\n c. exe\n d. obj\n e. none of these\n";
cin>>ANS30;
if (ANS30=='b')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"marks:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"Total marks obtained:"<<x<<" / 30\n";
cout<<"\nDEAR "<<name<<" you got "<<x<<" marks out of 30\t\t"<<x<<"/30\n";
cout<<"\n                   <---------------------------------------------------------------------------------->    \n";
break;
}

		break;
		
		
		
		
		case 1:cout<<"\n                                  ''DISCRETE STRUCTURE (DS) QUIZ''                                                 ";
		
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
			cout<<"NAME:\t"<<name<<"\t\t\t\t\t\t\tSAP_ID:\t"<<sapid<<"\n";
		cout<<"_____________________\t\t\t\t\t\t__________________\n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"ENTER THE QUANTITY OF THE QUESTIONS (5,10,15,30)\t";
		cin>>quantity;
			switch(quantity)
			{
			case 30:
			case 5:
		cout<<"\n\nQ: Write the correct answers from the following;\n";
		cout<<"__________________________________________________";
cout<<"\n\n1. A __________ is an ordered collection of objects.\n a. Relation\n b. Function\n c. Set\n d. Proposition\n\nAnswer:\t";
cin>>ANS1;
if (ANS1=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"2. The set O of odd positive integers less than 10 can be expressed by_____________\n a. {1, 2, 3}\n b. {1, 3, 5, 7, 9}\n c. {1, 2, 5, 9}\n d. {1, 5, 7, 9, 11}\n\nAnswer:\t";
cin>>ANS2;
if (ANS2=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"3. Power set of empty set has exactly _________ subset.\n a. One\n b. Two\n c. Zero\n d. Three\n\nAnswer:\t";
cin>>ANS3;
if (ANS3=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"4. What is the Cartesian product of A = {1, 2} and B = {a, b}?\n a. {(1, a), (1, b), (2, a), (b, b)}\n b. {(1, 1), (2, 2), (a, a), (b, b)}\n c. {(1, a), (2, a), (1, b), (2, b)}\n d. {(1, 1), (a, a), (2, a), (1, b)}\n\nAnswer:\t";
cin>>ANS4;
if (ANS4=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"5. The Cartesian Product B x A is equal to the Cartesian product A x B.\n a. True\n b. False\n\nAnswer:\t";
cin>>ANS5;
if (ANS5=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
break;
case 10:
cout<<"\n    <---------------->\n"<<"6. What is the cardinality of the set of odd positive integers less than 10?\n a. 10\n b. 5\n c. 3\n d. 20\n\nAnswer:\t";
cin>>ANS6;
if (ANS6=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"7. Which of the following two sets are equal?\n a. A = {1, 2} and B = {1}\n b. A = {1, 2} and B = {1, 2, 3}\n c. A = {1, 2, 3} and B = {2, 1, 3}\n d. A = {1, 2, 4} and B = {1, 2, 3}\n\nAnswer:\t";
cin>>ANS7;
if (ANS7=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"8. The set of positive integers is _____________\n a. Infinite\n b. Finite\n c. Subset\n d. Empty\n\nAnswer:\t";
cin>>ANS8;
if (ANS8=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"9. What is the Cardinality of the Power set of the set {0, 1, 2}?\n a. 8\n b. 6\n c. 7\n d. 9\n\nAnswer:\t";
cin>>ANS9;
if (ANS9=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"10. The members of the set S = {x | x is the square of an integer and x < 100} is ________________\n a. {0, 2, 4, 5, 9, 58, 49, 56, 99, 12}\n b. {0, 1, 4, 9, 16, 25, 36, 49, 64, 81}\n c. {1, 4, 9, 16, 25, 36, 64, 81, 85, 99}\n d. {0, 1, 4, 9, 16, 25, 36, 49, 64, 121}\n\nAnswer:\t";
cin>>ANS10;
if (ANS10=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"11. The function q ? r is equal to the function:\n a. ((p ? r) ? q) ? (p ? r)\n b. (p ? q) ? (p ? r)\n c. (p ? q) ? ?(p ? r)\n d. (p ? (r ? q)) ? ?(?q ? ?r)	\n\nAnswer:\t";
cin>>ANS11;
if (ANS11=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"12. The truth table for (p ? q) ? (p ? r) is the same as the truth table for:\n a. p ? q\n b. (p ? q) ? r\n c. (p ? q) ? (p ? r)\n d. (p ? q) ? (p ? r)\n\nAnswer:\t";
cin>>ANS12;
if (ANS12=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"13. In how many ways can a hungry student choose 3 toppings for his prize from a list of 10 delicious possibilities?\n a. 123\n b. 220\n c. 130\n d. 120\n\nAnswer:\t";
cin>>ANS13;
if (ANS13=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"14. Which of the following statements is FALSE:\n a. (p ? q) ? (?p ? q) ? (p ? ?q) is equal to ?q ? ?p\n b. (p ? q) ? (?p ? q) ? (p ? ?q) is equal to q ? p\n c. (p ? q) ? (?p ? q) ? (p ? ?q) is equal to q ? (p ? ?q)\n d. (p ? q) ? (?p ? q) ? (p ? ?q) is equal to [(p ? ?p) ? q] ? (p ? ?q)\n\nAnswer:\t";
cin>>ANS14;
if (ANS14=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"15.  Let A and B be any two arbitrary events then which one of the following is true ?\n a. P( A intersection B) = P(A). P(B)\n b. P(A union B) = P(A) + P(B)\n c. P(AB) = P(A intersection B). P(B)\n d. P(A union B) >= P(A) + P(B)\n\nAnswer:\t";
cin>>ANS15;
if (ANS15=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
break;
case 15:
cout<<"\n    <---------------->\n"<<"16. If X and Y be the sets. Then the set ( X - Y) union (Y- X) union (X intersection Y ) is equal to?\n a. X union Y\n b. Xc union Yc\n c. X intersection Y\n d. Xc intersection Yc\n\nAnswer:\t";
cin>>ANS16;
if (ANS16=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"17. If G is an undirected planer graph on n vertices with e edges then ?\n a. e<=n\n b. e<=2n\n c. e<=3n\n d. None of these\n\nAnswer:\t";
cin>>ANS17;
if (ANS17=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"18. Which of the following statement is false ?\n a. G is connected and is circuitless\n b. G is connected and has n edges\n c. G is minimally connected graph\n d. G is circuitless and has n-1 edges\n\nAnswer:\t";
cin>>ANS18;
if (ANS18=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"19. Probability that two randomly selected cards from a set of two red and two black cards are of same color is ?\n a. 1 / 2\n b. 1 / 3\n c. 2 / 3\n d. None of these\n\nAnswer:\t";
cin>>ANS19;
if (ANS19=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"20. The number of circuits that can be created by adding an edge between any two vertices in a tree is ?\n a. Two\n b. Exactly one\n c. At least two\n d. None\n\nAnswer:\t";
cin>>ANS20;
if (ANS20=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"21. In a tree between every pair of vertices there is ?\n a. Exactly one path\n b. A self loop\n c. Two circuits\n d. n number of paths\n\nAnswer:\t";
cin>>ANS21;
if (ANS21=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"22. The minimum number of cards to be dealt from an arbitrarily shuffled deck of 52 cards to guarantee that three cards are from some same suit is ?\n a. 8\n b. 3\n c. 9\n d. 12\n\nAnswer:\t";
cin>>ANS22;
if (ANS22=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"23. Context free languages are closed under ?\n a. union, intersection\n b. Intersection , complement\n c. union , kleene star\n d. Complement , kleene star\n\nAnswer:\t";
cin>>ANS23;
if (ANS23=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"24. Let R be a symmetric and transitive relation on a set A. Then ?\n a. R is reflexive and hence a partial order\n b. R is reflexive and hence an equivalence relation\n c. R is not reflexive and hence not an equivalence relation\n d. None of above\n\nAnswer:\t";
cin>>ANS24;
if (ANS24=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"25. A graph is a collection of.... ?\n a. Row and columns\n b. Vertices and edges\n c. Equations\n d. None of these\n\nAnswer:\t";
cin>>ANS25;
if (ANS25=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"26.  The degree of any vertex of graph is .... ?\n a. The number of edges incident with vertex\n b. Number of vertex in a graph\n c. Number of vertices adjacent to that vertex\n d. Number of edges in a graph\n\nAnswer:\t";
cin>>ANS26;
if (ANS26=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"27. If for some positive integer k, degree of vertex d(v)=k for every vertex v of the graph G, then G is called... ?\n a. K graph\n b. K-regular graph\n c. Empty graph\n d. All of above\n\nAnswer:\t";
cin>>ANS27;
if (ANS27=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"28. A graph with no edges is known as empty graph. Empty graph is also known as?\n a. Trivial graph\n b. Regular graph\n c. Bipartite graph\n d. None of these\n\nAnswer:\t";
cin>>ANS28;
if (ANS28=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"29. Length of the walk of a graph is .... ?\n a. The number of vertices in walk W\n b. The number of edges in walk W\n c. Total number of edges in a graph\n d. Total number of vertices in a graph\n\nAnswer:\t";
cin>>ANS29;
if (ANS29=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"30. A graph G is called a ..... if it is a connected acyclic graph ?\n a. Cyclic graph\n b. Regular graph\n c. Tree\n d. Not a graph\n\nAnswer:\t";
cin>>ANS30;
if (ANS30=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\nDEAR "<<name<<" you got "<<x<<" marks out of 30\t\t"<<x<<"/30\n";
cout<<"\n                   <---------------------------------------------------------------------------------->    \n";
		break;
	}
		break;
		
		
		
		
		case 2:cout<<"\n                                  ''APPLIED PHYSICS (AP) QUIZ''                                                 ";
		
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		cout<<"NAME:\t"<<name<<"\t\t\t\t\t\t\tSAP_ID:\t"<<sapid<<"\n";
		cout<<"_____________________\t\t\t\t\t\t__________________\n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"ENTER THE QUANTITY OF THE QUESTIONS (5,10,15,30)\t";
		cin>>quantity;
			switch(quantity)
			{
			case 30:
			case 5:
		cout<<"\n\nQ: Write the correct answers from the following;\n";
		cout<<"__________________________________________________";
cout<<"\n\n1. Holding the voltage constant, and plotting the current against the resistance as resistance is varied will form a\n a. straight line with a positive slope\n b. straight line with a negative slope\n c. parabola\n d. hyperbola\n\nAnswer:\t";
cin>>ANS1;
if (ANS1=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"2. When the current is plotted against the voltage for a fixed resistor, the plot is a\n a. straight line with a positive slope\n b. straight line with a negative slope\n c. parabola\n d. hyperbola\n\nAnswer:\t";
cin>>ANS2;
if (ANS2=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"3. For constant voltage in a circuit, doubling the resistance means\n a. doubling the current\n b. halving the current\n c. there is no change in the current\n d. depends on the amount of voltage\n\nAnswer:\t";
cin>>ANS3;
if (ANS3=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"4. A four-color resistor has the color-code red-violet-orange-gold. If it is placed across a 12 V source, the expected current is\n a. 0.12 mA\n b. 0.44 mA\n c. 1.25 mA\n d. 4.44 mA\n\nAnswer:\t";
cin>>ANS4;
if (ANS4=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"5. If the current in a 330 W resistor is 15 mA, the applied voltage is approximately\n a. 5.0 V\n b. 22 V\n c. 46 V\n d. 60 V\n\nAnswer:\t";
cin>>ANS5;
if (ANS5=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
break;
case 10:
cout<<"\n    <---------------->\n"<<"6. The current in a certain 4-band resistor is 22 mA when the voltage is 18 V. The color bands on the resistor are\n a. blue-gray-red-gold\n b. red-red-brown gold\n c. gray-red-brown-gold \n d. white-brown-red-gold\n\nAnswer:\t";
cin>>ANS6;
if (ANS6=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"7. Before troubleshooting a faulty circuit you should find out\n a. If the circuit ever worked\n b. The conditions that existed when it failed\n c. The symptoms of the failure\n d. All of the above\n\nAnswer:\t";
cin>>ANS7;
if (ANS7=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"8. A troubleshooting method that starts in the middle and works toward a fault is\n a. short-circuit testing\n b. comparison testing\n c. half-splitting\n d. resistance testing\n\nAnswer:\t";
cin>>ANS8;
if (ANS8=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"9. The total resistance of parallel resistors is equal to\n a. the sum of the resistances\n b. the sum of the reciprocals of the resistances\n c. the sum of the conductances\n d. none of the above\n\nAnswer:\t";
cin>>ANS9;
if (ANS9=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"10. The number of nodes in a parallel circuit is\n a. one\n b. two\n c. three\n d. can be any number\n\nAnswer:\t";
cin>>ANS10;
if (ANS10=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"11. The total resistance of the parallel resistors including R1=10 KW, R2=10 KW, R3=5.1 KW is\n a. 2.52 kW\n b. 3.35 kW\n c. 5.1 kW\n d. 25.1 kW\n\nAnswer:\t";
cin>>ANS11;
if (ANS11=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"12. If three equal resistors are in parallel, the total resistance is\n a. one third the value of one resistor\n b. the same as one resistor\n c. three times the value of one resistor\n d. there is not enough information to say\n\nAnswer:\t";
cin>>ANS12;
if (ANS12=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"13. In any circuit the total current entering a junction is\n a. less than the total current leaving the junction\n b. equal to the total current leaving the junction\n c. greater than the total current leaving the junction\n d. can be any of the above, depending on the circuit\n\nAnswer:\t";
cin>>ANS13;
if (ANS13=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"14. The total power dissipated in a parallel circuit is equal to the\n a. power in the largest resistor\n b. power in the smallest resistor\n c. average of the power in all resistors\n d. sum of the power in all resistors\n\nAnswer:\t";
cin>>ANS14;
if (ANS14=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"15. In a series circuit with more than one resistor, the current is\n a. larger in larger resistors\n b. smaller in larger resistors\n c. always the same in all resistors\n d. there is not enough information to say\n\nAnswer:\t";
cin>>ANS15;
if (ANS15=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
break;
case 15:
cout<<"\n    <---------------->\n"<<"16. In a series circuit with more than one resistor, the voltage is\n a. larger across larger resistors\n b. smaller across larger resistors\n c. always the same across all resistors\n d. there is not enough information to say\n\nAnswer:\t";
cin>>ANS16;
if (ANS16=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"17. If three equal resistors are in series, the total resistance is\n a. one third the value of one resistor\n  b. the same as one resistor\n c. three times the value of one resistor\n d. there is not enough information to say\n\nAnswer:\t";
cin>>ANS17;
if (ANS17=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"18. A series circuit cannot have\n a. more than two resistors\n b. more than one voltage source\n c. more than one path\n d. all of the above\n\nAnswer:\t";
cin>>ANS18;
if (ANS18=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"19. In a closed loop, the algebraic sum of all voltages (both sources and drops)\n a. is 0\n b. is equal to the smallest voltage in the loop\n c. is equal to the largest voltage in the loop\n d. depends on the source voltage\n\nAnswer:\t";
cin>>ANS19;
if (ANS19=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"20. The total power dissipated in a series circuit is equal to the\n a. power in the largest resistor\n b. power in the smallest resistor\n c. average of the power in all resistors\n d. sum of the power in all resistors\n\nAnswer:\t";
cin>>ANS20;
if (ANS20=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"21. The meaning of the voltage VAB is the voltage at\n a. Point A with respect to ground\n b. Point B with respect to ground\n c. The average voltage between points A and B\n d. The voltage difference between points A and B\n\nAnswer:\t";
cin>>ANS21;
if (ANS21=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"22. If value of moment arm is zero, then torque produced will be:\n a. 1\n b. 0\n c. Doubled\n d. Decreased\n\nAnswer:\t";
cin>>ANS22;
if (ANS22=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"23. Which quantities are used to describe laws of physics:\n a. Atomic quantities\n b. Nuclear quantities\n c. Mechanical quantities\n d. Physical quantities\n\nAnswer:\t";
cin>>ANS23;
if (ANS23=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"24. Units given by system international for measuring physical quantities are called:\n a. SI units\n b. IS units\n c. S units\n d. I units\n\nAnswer:\t";
cin>>ANS24;
if (ANS24=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"25. Magnetic field outside a solenoid is:\n a. Zero\n b. Strong\n c. Infinite\n d. Negligible\n\nAnswer:\t";
cin>>ANS25;
if (ANS25=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"26. Origin is the point of intersecting of ______ coordinate axes:\n a. One\n b. Two\n c. Three\n d. Four\n\nAnswer:\t";
cin>>ANS26;
if (ANS26=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"27. During measurement of quantities how many errors occurs:\n a. 5 types\n b. 4 types\n c. 3 types\n d. 2 types\n\nAnswer:\t";
cin>>ANS27;
if (ANS27=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"28. When work done on a body equals the change in its kinetic energy, this principle is known as\n a. work done principle\n b. work-energy principle\n c. work-velocity principle\n d. speed-displacement principle\n\nAnswer:\t";
cin>>ANS28;
if (ANS28=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"29. The gravitational potential energy is the product of\n a. gh\n b. mgh\n c. mg\n d. mgf\n\nAnswer:\t";
cin>>ANS29;
if (ANS29=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"30. The S.I Unit of power is:\n a. Henry\n b. coulomb\n c. watt\n d. watt-Hour\n\nAnswer:\t";
cin>>ANS30;
if (ANS30=='c')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\nDEAR "<<name<<" you got "<<x<<" marks out of 30\t\t"<<x<<"/30\n";
cout<<"\n                   <---------------------------------------------------------------------------------->    \n";
		break;
	}
		break;
		
		
		
		
		case 3:cout<<"\n                                  ''ENGLISH COMPOSITION AND COMPREHENSION (ENG) QUIZ''                                                 ";
		
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
		cout<<"NAME:\t"<<name<<"\t\t\t\t\t\t\tSAP_ID:\t"<<sapid<<"\n";
		cout<<"_____________________\t\t\t\t\t\t__________________\n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"ENTER THE QUANTITY OF THE QUESTIONS (5,10,15,30)\t";
		cin>>quantity;
			switch(quantity)
			{
				case 30:
				case 5:
		cout<<"\n\nQ: Write the correct answers from the following;\n";
		cout<<"__________________________________________________";
cout<<"\n\n1. Which part of speech expresses a mild or sudden burst of emotion? Examples are wow! or no.\n a. Adverb\n b. Noun\n c. Interjection\n d. Preposition\n\nAnswer:\t";
cin>>ANS1;
if (ANS1=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"2. He is an old friend of mine.\n a. Verb\n b. Noun\n c. Adverb\n d. Adjective\n\nAnswer:\t";
cin>>ANS2;
if (ANS2=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"3. I was pleasantly surprised when she showed up at the door unannounced.\n a. adverb\n b. adjective\n c. verb\n d. conjunction\n\nAnswer:\t";
cin>>ANS3;
if (ANS3=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"4. I never expected that I would win the first prize so I couldn't believe my ears when they announced my name as the winner.\n a. Adverb\n b. Adjective\n c. Verb\n d. Noun\n\nAnswer:\t";
cin>>ANS4;
if (ANS4=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"5. Everybody hates him for his repulsive looks.\n a. Verb\n b. Adjective\n c. Adverb\n d. Noun\n\nAnswer:\t";
cin>>ANS5;
if (ANS5=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
break;
case 10:
cout<<"\n    <---------------->\n"<<"6. John came later than Peter.\n a. Adjective\n b. Adverb\n c. Verb\n d. Noun\n\nAnswer:\t";
cin>>ANS6;
if (ANS6=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"7. I think the latter part of the film is more interesting than the former part.\n a. Adverb\n b. Adjective\n c. Conjunction\n d. preposition\n\nAnswer:\t";
cin>>ANS7;
if (ANS7=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"8. I am going to make an early start so that I won't get stuck in the traffic.\n a. Adverb\n b. Adjective\n c. Verb\n d. Noun\n\nAnswer:\t";
cin>>ANS8;
if (ANS8=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"9. It is more expensive to travel on Friday, so I will leave on Thursday evening.\n a. Adverb\n b. Adjective\n c. Preposition\n d. Conjunction\n\nAnswer:\t";
cin>>ANS9;
if (ANS9=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"10. The baby does not resemble either of its parents.\n a. Verb\n b. Adverb\n c. Adjective\n d. Pronoun\n\nAnswer:\t";
cin>>ANS10;
if (ANS10=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"11. In my opinion, she should have resigned earlier.\n a. Adverb\n b. Conjunction\n c. Preposition\n d. Adjective\n\nAnswer:\t";
cin>>ANS11;
if (ANS11=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"12. I was distressed to hear about his death.\n a. Verb\n b. Adjective\n c. Adverb\n d. Noun\n\nAnswer:\t";
cin>>ANS12;
if (ANS12=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"13. That policeman is a friend of mine.\n a. Adjective\n b. Noun\n c. Pronoun\n d. Verb\n\nAnswer:\t";
cin>>ANS13;
if (ANS13=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"14. I would prefer to spend the weekend at home rather than drive all the way to a beach resort.\n a. Verb\n b. Adverb\n c. Adjective\n d. Noun\n\nAnswer:\t";
cin>>ANS14;
if (ANS14=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"15. A friend of mine has just invited me to Italy.\n a. Conjunction\n b. Preposition\n c. Verb\n d. Pronoun\n\nAnswer:\t";
cin>>ANS15;
if (ANS15=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
break;
case 15:
cout<<"\n    <---------------->\n"<<"16. I prefer making toys for my children rather than buying them in the toy store.\n a. Conjunction\n b. Preposition\n c. Adverb\n d. Noun\n\nAnswer:\t";
cin>>ANS16;
if (ANS16=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"17. Which tense is used to express general truths and facts?\n a. Present continuous tense\n b. Present perfect tense\n c. Past perfect tense\n d. Present indefinite tense\n\nAnswer:\t";
cin>>ANS17;
if (ANS17=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"18. According to the prevailing rate, two dozen __________ rupees one hundred.\n a. costs\n b. cost\n c. costing\n d. costed\n\nAnswer:\t";
cin>>ANS18;
if (ANS18=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"19. The Council __________ made its decision.\n a. have\n b. have had\n c. has\n d. having\n\nAnswer:\t";
cin>>ANS19;
if (ANS19=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"20. What do tenses as the form of a verb help to determine?\n a. The time of the action\n b. The state of the action\n c. Both (A) and (B)\n d. The number of action\n\nAnswer:\t";
cin>>ANS20;
if (ANS20=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"21. Which tense is used to show the completion of an action by a certain time in the future?\n a. Future perfect tense\n b. Present indefinite tense\n c. Future perfect continuous tense\n d. Both (A) and (C)\n\nAnswer:\t";
cin>>ANS21;
if (ANS21=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"22. Identify the tense used in the following sentence. ''When I reached the bookstore, all the copies had already been sold.''\n a. Past perfect tense\n b. Past indefinite tense\n c. Present perfect tense\n d. Present indefinite tense\n\nAnswer:\t";
cin>>ANS22;
if (ANS22=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"23. The wise leader and politician __________ assassinated.\n a. are\n b. has been\n c. have been\n d. have had been\n\nAnswer:\t";
cin>>ANS23;
if (ANS23=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"24. Neither of the paintings __________ sold.\n a. have been\n b. were\n c. are\n d. was\n\nAnswer:\t";
cin>>ANS24;
if (ANS24=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"25. Sita or her brothers __________ to be blamed.\n a. is\n b. has\n c. are\n d. was\n\nAnswer:\t";
cin>>ANS25;
if (ANS25=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"26. The Chief guest, with his wife, __________.\n a. has left\n b. are leaving\n c. have left\n d. left\n\nAnswer:\t";
cin>>ANS26;
if (ANS26=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"27. The quality of products __________ over time.\n a. are degrading\n b. have been degrading\n c. have degrading\n d. were degraded\n\nAnswer:\t";
cin>>ANS27;
if (ANS27=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"28. The news __________ not updated timely.\n a. were\n b. have\n c. is\n d. are\n\nAnswer:\t";
cin>>ANS28;
if (ANS28=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"29. They __________ into their cars and drove away.\n a. has got\n b. have got\n c. gets\n d. got\n\nAnswer:\t";
cin>>ANS29;
if (ANS29=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"30. Choose the sentence with the future perfect tense.\n a. They shall have arrived by then\n b. They shall be arriving by then\n c. They shall arrive by then\n d. They shall have been arriving by then\n\nAnswer:\t";
cin>>ANS30;
if (ANS30=='a')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\nDEAR "<<name<<"you got "<<x<<" marks out of 30\t\t"<<x<<"/30\n";
cout<<"\n                   <---------------------------------------------------------------------------------->    \n";
		break;
	}
		break;
		
		
		
		
		case 4:cout<<"\n                                  ''INTRODUCTION TO INFORMATION AND COMMUNICATION TECHNOLOGY (IICT) QUIZ''                                                 ";
		
		cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n-------------------------------------------------------------------------------------------------------------------\n";
			cout<<"NAME:\t"<<name<<"\t\t\t\t\t\t\tSAP_ID:\t"<<sapid<<"\n";
		cout<<"_____________________\t\t\t\t\t\t__________________\n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"ENTER THE QUANTITY OF THE QUESTIONS (5,10,15,30)\t";
		cin>>quantity;
			switch(quantity)
			{
				case 30:
				case 5:
		cout<<"\n\nQ: Write the correct answers from the following;\n";
		cout<<"__________________________________________________";
cout<<"\n\n1. Which of the following searches websites by keyword(s)?\n a. Web bugs\n b. Search engine\n c. Spyware\n d. Portals\n\nAnswer:\t";
cin>>ANS1;
if (ANS1=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"2. When CPU is executing a program that is part of the operating system, it is said to be in -\n a. Interrupt mode\n b. System mode\n c. Simplex mode\n d. None\n\nAnswer:\t";
cin>>ANS2;
if (ANS2=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"3. A byte consists of how many bits?\n a. 16\n b. 4\n c. 2\n d. 8\n\nAnswer:\t";
cin>>ANS3;
if (ANS3=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"4. Which of the following cannot be done byusing e-mail?\n a. Send an attachment\n b. Forward an e-mail\n c. Copy file from a remote computer\n d. Reply to an e-mail\n\nAnswer:\t";
cin>>ANS4;
if (ANS4=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"5. Bit stands for-\n a. Binary Information term\n b. Binary Digit\n c. Binary tree\n d. None\n\nAnswer:\t";
cin>>ANS5;
if (ANS5=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
break;
case 10:
cout<<"\n    <---------------->\n"<<"6. Which one of the following is an extension of video file format in computers?\n a. jpg\n b. exe\n c. mpg\n d. bmp\n\nAnswer:\t";
cin>>ANS6;
if (ANS6=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"7. Which one of the following devices is required to connect a computer to the internet?\n a. Pen Drive\n b. Mouse\n c. DVD\n d. Modem\n\nAnswer:\t";
cin>>ANS7;
if (ANS7=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"8. Which one of the following devices is a must to run a computer?\n a. Speaker\n b. CD-ROM\n c. USB Drive\n d. Processor\n\nAnswer:\t";
cin>>ANS8;
if (ANS8=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"9. When you start your computer then which component works first?\n a. BIOS\n b. Processor\n c. Hard disk\n d. RAM\n\nAnswer:\t";
cin>>ANS9;
if (ANS9=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"10. Which of the following is an example of system software?\n a. Fire fox\n b. Notepad\n c. Windows98\n d. Avira\n\nAnswer:\t";
cin>>ANS10;
if (ANS10=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"11. Which of the following is an input device?\n a. CRT Monitor\n b. speaker\n c. Printer\n d. keyboard\n\nAnswer:\t";
cin>>ANS11;
if (ANS11=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"12. Which of the following is not an example of secondary storage device?\n a. Hard disks\n b. RAM\n c. Magnetic tapes\n d. CD\n\nAnswer:\t";
cin>>ANS12;
if (ANS12=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"13. Which of the following is an Antivirus Software?\n a. Photoshop\n b. Norton\n c. Yahoo\n d. Flash\n\nAnswer:\t";
cin>>ANS13;
if (ANS13=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"14. Which of the following commands is given to reboot the computer?\n a. Ctrl + Alt + Del\n b. Ctrl + Alt + Tab\n c. Ctrl + Shift + De\n d. Ctrl + Shift + Tab\n\nAnswer:\t";
cin>>ANS14;
if (ANS14=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"15. Which one of the following is called the Brain of the computer?\n a. Memory\n b. CPU\n c. Hard disk\n d. RAM\n\nAnswer:\t";
cin>>ANS15;
if (ANS15=='b')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'b'\n"<<"your marks are:"<<x<<"\n";
break;
case 15:
cout<<"\n    <---------------->\n"<<"16. The ASCII  code of 'A' is-\n a. 60\n b. 80\n c. 65\n d. 100\n\nAnswer:\t";
cin>>ANS16;
if (ANS16=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"17. RAM is -\n a. Non-volatile\n b. Secondary storage\n c. Permanent storage\n d. Volatile\n\nAnswer:\t";
cin>>ANS17;
if (ANS17=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"18. OMR means -\n a. Optical Mark Recognition\n b. Original Mark Recognition\n c. Only Mark Reading\n d. Optical Media Reading\n\nAnswer:\t";
cin>>ANS18;
if (ANS18=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"19. Firmware is built usin'g-\n a. RAM\n b. Video Memory\n c. Cache Memory\n d. ROM\n\nAnswer:\t";
cin>>ANS19;
if (ANS19=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"20. Which of the following is nor an internet search engine?\n a. Google\n b. Yahoo\n c. MSN\n d. Windows\n\nAnswer:\t";
cin>>ANS20;
if (ANS20=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: ''\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"21. IICT stands foor…? \n a. Information to Intera Common Terminology\n b. Introduction  to International Communication Technology\n c. Introduction to Information and Communication Technology\n d. Information to Introduction and Communication Technology\n";
cin>>ANS21;
if (ANS21=='c')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'c'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"22. Which of the following statements is NOT correct?\n a.	computer is capable of processing only digital signal\n b.	Appropriate software is required foor processing the data\n c.	Computer is capable of processing digital as well as analog signals\n d.	Computer is capable of analysing both quantitative and qualitative data\n";
cin>>ANS22;
if (ANS22=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"23. Which of the following is correct statement?\n a.	A set of instructions is called a programme\n b.	Computers can be used foor diagnosing the difficulty of a student in learning a subject\n c.	Psychological testing can be done with the help of computer provided software is available\n d.	All of the above\n";
cin>>ANS23;
if (ANS23=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"24. Which of the following statements is correct?\n a.	Virus is a part of software\n b.	Virus is an operating system\n c.	Internet does'nt allow the virus to spread\n d.	Virus improves the speed of processing information through computer\n";
cin>>ANS24;
if (ANS24=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"25. In digital technology, information is translated into ________.\n a. bits (0 and 1)\n b. Electric Pulses\n\nAnswer:\t c. Mechanical Pulses\n d. digits (0 to 9)\n\nAnswer:\t";
cin>>ANS25;
if (ANS25=='a')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'a'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"26. People use technology every day at __________\n a. Home\n b. Workplace\n c. Hospital\n d. All of the above\n\nAnswer:\t";
cin>>ANS26;
if (ANS26=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"27. Which of the following is nor an ICT tool?\n a. Computer\n b. Mobile\n c. Internet\n d. Hacking\n\nAnswer:\t";
cin>>ANS27;
if (ANS27=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"28. Which of the following is an ICT tool?\n a. Computer\n b. Smartphone\n c. Tablet\n d. All of the above\n\nAnswer:\t";
cin>>ANS28;
if (ANS28=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"29. ICT skills help us to ______\n a. Communicate with others\n b. boost our business\n c. stay connected with friends\n d. All of the above\n\nAnswer:\t";
cin>>ANS29;
if (ANS29=='d')
{
cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else 
cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\n    <---------------->\n"<<"30. Which of the following way is used to store/record information?\n a. It can be hand written on paper.\n b. It can be typed usin'g typewriter\n c. It can be typed usin'g computer\n d. All of the above\n\nAnswer:\t";
cin>>ANS30;
if (ANS30=='d')
{cout<<"\nCorrect\n";
x=x+1;
cout<<"your marks are:"<<x;}
else cout<<"\nFalse\n"<<"correct answer is: 'd'\n"<<"your marks are:"<<x<<"\n";
cout<<"\nDEAR "<<name<<" you got "<<x<<" marks out of 30\t\t"<<x<<"/30\n";
cout<<"\n                   <---------------------------------------------------------------------------------->    \n";
		break;
}
}
    break;
}
	getch();
	return 0;
}

