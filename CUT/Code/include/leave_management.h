#pragma once
#include <iomanip>
#include<cstring>
#include <iostream>
#include <fstream>
#include <thread>
#include <list>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Employee_registration
{
    long int emp_id;
    string first_name;
    string last_name;
    string date_of_joining; //requires validation
    string password;
    string role;
public:
    void set_emp_id(int p_emp_id);
    int get_emp_id();
    
    void set_first_name(string p_first_name);
    string get_first_name();
    
    void set_last_name(string p_last_name);
    string get_last_name();
    
    void set_date_of_joining(string p_date_of_joining);
    string get_date_of_joining();
    
    void set_password(string p_password);
    string get_password();
    
    void set_role(string p_role);
    string get_role();
    
};
void write_to_file(int e_id, string f_name, string l_name, string d_o_j, string pass, string role);
void employee_role();
void hr_role();
void manager_role();
string decrypt(string encryptedPassword);
string encrypt(string password);
   
class Leave_management
{
    //member functions of Leave_management.
public:
    void new_employee_registration(int ch);
    int employee_login();
    int checkpassword(string& pass);
    int login_interface();
    void load_user_data();
    int validate_login(int eid, string pass, string role);
     bool validateDate1(const string& s);
    void leave_management_interface();
    int manager_login();
    int hr_login();
    void load_leave_balance();
    void push_leave_data(int id);
    void employee_leave_data(int eid);
    int validate_leave(int days_count, int ch,int id);
    void print_leave_type();
    void load_leave_history();
    void print_leave_history(string line);
    void modify_credits(string s, int e_id);
    void individual_leave_data(int eid, string line);
    void write_permission(int ch, int id);
    void write_leave_history(int eid, string line);
    int validate_eid(int id);
    void modify_credits_update(string s, int e_id, int count);
    bool validateDate(const string& dateStr);
};

//vector <Employee_registration> particular_user_data;

class Employee
{
    public:
    void employee_interface();
    void apply_leave_interface(int emp_id);
    void check_leave_balance(int id);
    void employee_leave_history(int id);
    void show_all_leave();
    
    
};
class Admin : public Employee
{
    public:
    void admin_interface();
    void modify_leave_balance();
    
    
};
class Manager : public Employee
{
    public:
    void manager_interface();
    void give_permission();
    void show_pending_leave();
    
};
