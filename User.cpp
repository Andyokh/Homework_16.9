#include "User.h"

void User::setNewPassword(const std::string& newPassword) {
	_password = newPassword;
}

void User::setNewName(const std::string& newName) {
	_name = newName;
}

const std::string& User::getLogin() const {
	return _login;
}

const std::string& User::getPassword() const {
	return _password;
}

const std::string& User::getName() const {
	return _name;
}

