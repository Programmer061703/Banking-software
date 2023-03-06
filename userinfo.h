#ifndef USER_INFO
#define USER_INFO
#include <iostream>
using namespace std; 


class User_Info{

public:
User_Info();
User_Info(string password, string username, string user_ID);
User_Info(User_Info & copy);
~User_Info();

//Getters

string getPassword();
string getUsername();
string getUser_ID();

//Setters 
void setPassword(string password);
void setUsername(string username);
void setUser_ID(string user_ID); 
void print(); 



private:
string password;
string username;
string user_ID;





};









#endif USER_INFO