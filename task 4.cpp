#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string user_input;
	cout<<"Welcome! I am your Chatbot"<<endl;	
	
	while(true)
	{
		getline(cin,user_input);
		if(user_input=="Hello"||user_input=="Hey"||user_input=="Hi")
		{
			cout<<"Hello! How can I assist you?"<<endl;
		}
		else if(user_input=="How are you?"||user_input=="Are you ok?")
		{
			cout<<"I am doing well, thanks for asking! How about you?"<<endl;
		}
		else if(user_input=="What's my name?")
			{
				cout<<"Sorry, you didn't tell me your name yet. What is your name?";			
		    }
	   
	    	else if(user_input==("My name is Wareesha"))
	    	{
	    	    cout<<"You have a good name, Wareesha"<<endl;
		    }
		else if(user_input=="I have some work,Bye"||user_input=="Bye"||user_input=="Goodbye")
		{
			cout<<"Bye! Do come again";
		}
		else
		{
			cout<<"Sorry, I didn't get that"<<endl;
		}
		
		return 0;		
    }   
}


