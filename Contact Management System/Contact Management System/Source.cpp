#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	char select;
	map<string, string>search_by_name;
	string name, number;
	
	cout << "--------------------------- Contact Management System ----------------------------" << endl;
	
	
	
	
	do
	{
		
		if (search_by_name.empty())
		{
			cout << "Your contact's file is empty" << endl;
			
		}
		
		else
		{
			map<string, string>::iterator it;
			cout << "Your contact/s is/are" << endl;
			for (it = search_by_name.begin(); it != search_by_name.end(); it++)
			{
				cout << it->first << ' ' << it->second << endl;
			}
		}
		cout << "----------------------------------------------------" << endl;
		cout << "Press" << endl;
		cout << "1-To add a new contact" << endl;
		cout << "2-To search for a contact" << endl;
		cout << "3-To delete a contact" << endl;
		cout << "4-To edit a contact" << endl;
		cout << "5-To exit" << endl;

		cin >> select;
		if (select == '1')
		{
			char choice;
			cout << "Press" << endl;
			cout << "1-To continue" << endl;
			cout << "2-To back to main menu" << endl;
			cin >> choice;
			if (choice == '1')
			{
				cout << "Enter a name" << endl;
				cin >> name;
				cout << "Enter a number" << endl;
				cin >> number;
				if (search_by_name[name] == number)
				{
					cout << "This contact is saved" << endl;
				}
				else
				{
					search_by_name[name] = number;
				}
				
				
			}
			else if (choice == '2')
			{
				continue;
			}
		}


		else if (select == '2')
		{
			char choice;
			cout << "Press" << endl;
			cout << "1-To search by name" << endl;
			cout << "2-To search by number" << endl;
			cout << "3-To back to main menu" << endl;

			cin >> choice;
			if (choice == '1')
			{
				cout << "Enter a name" << endl;
				cin >> name;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (name == it->first)
					{
						cout << name << ' ' << search_by_name[name] << endl;
						del = 0;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
				
					
			}
			else if (choice == '2')
			{
				cout << "Enter a number" << endl;
				cin >> number;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (number == it->second)
					{
						del = 0;
						cout << it->first << ' ' << it->second;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
				

			}
			else if (choice == '3')
			{
				continue;
			}
		}
		else if (select == '3')
		{
			char choice;
			cout << "Press" << endl;
			cout << "1-To select contact by name" << endl;
			cout << "2-To select contact by number" << endl;
			cout << "3-To back" << endl;
			cin >> choice;
			if (choice == '1')
			{
				cout << "Enter a name" << endl;
				cin >> name;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (name == it->first)
					{
						del = 0;
						search_by_name.erase(name);
						cout << "This contact is deleted" << endl;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
				
				
			}
			else if (choice == '2')
			{
				cout << "Enter a number" << endl;
				cin >> number;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (number == it->second)
					{
						del = 0;
						search_by_name.erase(number);
						cout << "This contact is deleted" << endl;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
			}
			else if (choice == '3')
			{
				continue;
			}
		}
		else if (select == '4')
		{
			char choice;
			cout << "Press" << endl;
			cout << "1-To edit contact by name" << endl;
			cout << "2-To edit contact by number" << endl;
			cout << "3-To back to main menu" << endl;
			cin >> choice;
			if (choice == '1')
			{
				
				cout << "Enter a name to select a contact you want to edit" << endl;
				cin >> name;
				cout << "The contact you want to edit is" << endl;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (name == it->second)
					{
						del = 0;
						cout << it->first << ' ' << it->second;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
				search_by_name.erase(name);
				cout << "Enter a name" << endl;
				cin >> name;
				cout << "Enter a number" << endl;
				cin >> number;
				search_by_name[name] = number;
			}
			
			else if (choice == '2')
			{
				cout << "Enter a number to select a contact you want to edit" << endl;
				cin >> number;
				cout << "The contact you want to edit is" << endl;
				bool del = 1;
				map<string, string>::iterator it;
				for (it = search_by_name.begin(); it != search_by_name.end(); it++)
				{
					if (number == it->second)
					{
						del = 0;
						cout << it->first << ' ' << it->second;
						break;
					}
				}
				if (del)
					cout << "This contact is not found" << endl;
				search_by_name.erase(number);
				cout << "Enter a name" << endl;
				cin >> name;
				cout << "Enter a number" << endl;
				cin >> number;
				search_by_name[name] = number;
			}
			else if (choice == '3')
			{
				continue;
			}
		}
		cout << "------------------------------------------" << endl;
	}while (select != '5');
	
	
	return 0;
}
