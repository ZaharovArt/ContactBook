#pragma once
#include<string>
using namespace std;
class Contact
{
private:
	char* surname;
	char* name;
	char* middleName;
	char* homePhone;
	char* workPhone;
	char* mobPhone;
	char* info;

public:
	Contact(const char* sur, const char* name, const char* mid, const char* hPhone, const char* wPhone, const char* mPhone, const char* info) {

		this->surname = sur ? new char[strlen(sur) + 1] : nullptr;
		this->name = name ? new char[strlen(name) + 1] : nullptr;
		this->middleName = mid ? new char[strlen(mid) + 1] : nullptr;
		this->homePhone = hPhone ? new char[strlen(hPhone) + 1] : nullptr;
		this->workPhone = wPhone ? new char[strlen(wPhone) + 1] : nullptr;
		this->mobPhone = mPhone ? new char[strlen(mPhone) + 1] : nullptr;
		this->info = info ? new char[strlen(info) + 1] : nullptr;

		for (int i = 0; i < strlen(sur); i++) {
			this->surname[i] = sur[i];
		}
		for (int i = 0; i < strlen(name); i++) {
			this->name[i] = name[i];
		}
		for (int i = 0; i < strlen(mid); i++) {
			this->middleName[i] = mid[i];
		}
		for (int i = 0; i < strlen(hPhone); i++) {
			this->homePhone[i] = hPhone[i];
		}
		for (int i = 0; i < strlen(wPhone); i++) {
			this->workPhone[i] = wPhone[i];
		}
		for (int i = 0; i < strlen(mPhone); i++) {
			this->mobPhone[i] = mPhone[i];
		}
		for (int i = 0; i < strlen(info); i++) {
			this->info[i] = info[i];
		}

	}

	Contact(): Contact ("***", "***", "***", "***", "***", "***", "***") {}
	Contact(const Contact & contact) : Contact (contact.surname,contact.name,contact.middleName,contact.homePhone,contact.workPhone,contact.mobPhone,contact.info){}

	char*& getSurname() {
		return this->surname;
	}
	void setSurname(const char* sur) {

		if (sur && this->surname){
			delete[] this->surname;
			this->surname = new char[strlen(sur) + 1];
			strcpy_s(this->surname, strlen(sur) + 1, sur);
		}
	}

	char*& getName() {
		return this->name;
	}
	void setName(const char* name) {
		if (name && this->name) {
			delete[] this->name;
			this->name = new char[strlen(name) + 1];
			strcpy_s(this->name, strlen(name) + 1, name);
		}
	}

	char*& getMidllename() {
		return this->middleName;
	}
	void setMidllename(const char* mid) {
		if (mid && this->middleName) {
			delete[] this->middleName;
			this->middleName = new char[strlen(mid) + 1];
			strcpy_s(this->middleName, strlen(mid) + 1, mid);
		}
	}

	char*& getHomephone() {
		return this->homePhone;
	}
	void setHomephone(const char* hPhone) {
		if (hPhone && this->homePhone) {
			delete[] this->homePhone;
			this->homePhone = new char[strlen(hPhone) + 1];
			strcpy_s(this->homePhone, strlen(hPhone) + 1, hPhone);
		}
	}
	
	char*& getWorkphone() {
		return this->workPhone;
	}
	void setWorkphone(const char* wPhone) {
		if (wPhone && this->workPhone) {
			delete[] this->workPhone;
			this->workPhone = new char[strlen(wPhone) + 1];
			strcpy_s(this->workPhone, strlen(wPhone) + 1, wPhone);
		}
	}

	char*& getMobphone() {
		return this->mobPhone;
	}
	void setMobphone(const char* mPhone) {
		if (mPhone && this->mobPhone) {
			delete[] this->mobPhone;
			this->mobPhone = new char[strlen(mPhone) + 1];
			strcpy_s(this->mobPhone, strlen(mPhone) + 1, mPhone);
		}
	}

	char*& getInfo() {
		return this->info;
	}
	void setInfo(const char* info) {
		if (info && this->info) {
			delete[] this->info;
			this->info = new char[strlen(info) + 1];
			strcpy_s(this->info, strlen(info) + 1, info);
		}
	}
	string showContact() {
		string s = "";
		s.append(this->surname);
		s.append(" ");
		s.append(this->name);
		s.append(" ");
		s.append(this->middleName);
		s.append(" ");
		s.append(this->homePhone);
		s.append(" ");
		s.append(this->workPhone);
		s.append(" ");
		s.append(this->mobPhone);
		s.append(" ");
		s.append(this->info);
		return s;
	}

	~Contact() {
		if (this->surname) {
			delete[] surname;
		}
		if (this->name) {
			delete[] name;
		}
		if (this->middleName) {
		delete[] middleName;
		}
		if (this->workPhone) {
			delete[] workPhone;
		}
		if (this->homePhone) {
			delete[] homePhone;
		}
		if (this->mobPhone) {
			delete[] mobPhone;
		}
		if (this->info) {
			delete[] info;
		}
	}
};

