#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;

class student
{
	string usn,name,branch,buffer,sem;
    public:
	void read_data();
	void pack();
	void write_to_file();
	void unpack();
	int search(string key);
	int delete_from_file(string key);
//	void modify(string);

};

void student::read_data()
{
	cout << "\nUSN:";
	cin >> usn;

	cout << "\nName:";
	cin >> name;

	cout << "\nBranch:";
	cin >> branch;

	cout << "\nSemester:";
	cin >> sem;
}

void student::pack()
{
	string temp;
	temp.erase();

	temp+= usn + '|' + name + '|' + branch + '|' + sem;

	for(;temp.size() < 100;) temp += '$';

	buffer+= temp + '\n';
}

void student::write_to_file()
{
	fstream file;
	file.open("1.txt",ios::out|ios::app);
	file << buffer;
	file.close();
}

void student::unpack()
{
	cout << buffer;
	string sem;

	int i=0;

	usn.erase();
	while(buffer[i]!='|')
		usn += buffer[i++];
 cout << usn;
 	
	name.erase();
	i++;
	while(buffer[i]!='|')
		name += buffer[i++];

	branch.erase();
	i++;
	while(buffer[i]!='|')
		branch += buffer[i++];

	sem.erase();
	i++;
	while(buffer[i]!='|')
		sem += buffer[i++];

	cout << sem; 	
		
   


}

int student::search(string key)
{
	ifstream file;
	buffer.erase();
	int flag = 0,pos = 0,i=0;

	file.open("1.txt",ios::in);

	getline(file,buffer);
	//cout << buffer;
	unpack();
	// while(1)
	// {
		
	// 	unpack(i);

	// 	if(key == usn)
	// 	{
	// 		cout << "\nFound the key!. The Record is" << buffer;

	// 		pos = file.tellg();
	// 		flag = 1;
	// 		return pos;
	// 	}
	// 	i+=102;
	// }

	file.close();

	if(!flag)
	{
		cout << "\nNot Found\n\n";
		return pos;
	}
	return 0;

}

int student::delete_from_file(string key)
{
	fstream file;
	int pos = search(key);

	char del_mark = '+',t;

	int flag = 0;

	if(pos)
	{
		file.open("1.txt");
		pos = pos - 101;

		file.seekp(pos,ios::beg);
		file.put(del_mark);
		flag = 1;
	}

	file.close();

	if(!flag) return 0;
	return 1;
}

int main()
{
	int choice=0;
	string key;
	student s1;
	while(1)
	{
		cout << "\n1.Insert Student Record\n2.Search Student Record\n3.Delete Student Record\n4:Exit\n\nEnter your choice:";

		cin >> choice;

		switch(choice)
		{
			case 1: s1.read_data();
					s1.pack();
					s1.write_to_file();
					s1.unpack();
					break;

			case 2: cout <<  "\nEnter the usn:";
					cin >> key;
					s1.search(key);
					break;
			case 3:	cout << "\nEnter the USN to be deleted:";
					cin >> key;
					s1.delete_from_file(key);
					break;
			default: cout << "\nWrong Choice";
					break;
		}

	}
}