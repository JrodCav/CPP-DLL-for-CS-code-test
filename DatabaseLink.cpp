// DatabaseLink.cpp : Implementation File --> Defines the exported functions for the DLL

// Header File Imports
//#define _Compiling_DATABASELINK
#include "pch.h"
#include "DatabaseLink.h"
// Standard Library Imports
#include <iostream>
#include <string>

using namespace std;

Connection::Connection(char* database_type) {
	this->database_type = database_type;
	cout << "New Connection created\n Database Type -> " << this->database_type << "\n" << endl;
}

Connection::Connection(char* database_type, char* src_location) {
	this->database_type = database_type;
	this->src_location = src_location;
	cout << "New Connection created\n Database Type -> " << this->database_type << "\n Source Location -> " << this->src_location << "\n" << endl;
}

Connection::Connection(char* database_type, char* src_location, char* password) {
	this->database_type = database_type;
	this->password = password;
	this->src_location = src_location;
	cout << "New Connection created\n Database Type -> " << this->database_type << "\n Source Location -> " << this->src_location << "\n Password -> " << this->password << "\n" << endl;
}

char* Connection:: getType() {
	cout << "Getting database type -> " << this->database_type << endl;
	return this->database_type;
}

char* Connection::getSource() {
	cout << "Getting source location -> " << this->src_location << endl;
	return this->src_location;
}

void Connection::setSource(char* src_location) {
	this->src_location = src_location;
	cout << "Setting new source location -> " << this->src_location << endl;
}

char* Connection::getPassword() {
	cout << "Getting password -> " << this->password << endl;
	return this->password;
}

void Connection::setPassword(char* password) {
	this->password = password;
	cout << "Setting new password -> " << this->password << endl;
}