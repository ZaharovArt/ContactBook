#pragma once
#include"Contact.h"
class ContactBook
{
private:
	Contact *arrayContacts;
	int size;

	void copyContact(Contact& dst, Contact& src) {
		dst.setSurname(src.getSurname());
		dst.setName(src.getName());
		dst.setMidllename(src.getMidllename());
		dst.setHomephone(src.getHomephone());
		dst.setWorkphone(src.getWorkphone());
		dst.setMobphone(src.getMobphone());
		dst.setInfo(src.getInfo());
	}

public:
	ContactBook(Contact* contacts, int size) {
		if (contacts) {
			arrayContacts = new Contact[size];
			this->size = size;
			for (int i = 0; i < size; i++) {
				arrayContacts[i] = contacts[i];
			}
		}
		else {
			contacts = nullptr;
			this->size = size;
		}
	}

	ContactBook() : ContactBook(nullptr, 0) {};

	ContactBook(const ContactBook& book) {
		this->size = book.size;
		if (book.arrayContacts) {
			arrayContacts = new Contact[book.size];
			for (int i = 0; i < size; i++) {
				arrayContacts[i] = book.arrayContacts[i];
			}
		}
		else {
			arrayContacts = nullptr;
		}
	}

	Contact getContact(int i) {
		return this->arrayContacts[i];

	}

	void addContact(Contact& contact) {
		if (size > 0) {
			Contact* temp = new Contact[size + 1];
			Contact* src = this->arrayContacts;
			for (int i = 0; i < size; i++) {
				copyContact(*(temp + i), *(src + i));
			}

			copyContact(*(temp + size), contact);
			delete[] arrayContacts;
			arrayContacts = temp;
			size++;
		}
		else {
			arrayContacts = new Contact[1]{ contact };
			size = 1;
		}
		//cout << "size book"<<size;
	}

	string showContacts() {
		string s = "";
		for (int i = 0; i < size; i++) {
			s.append(arrayContacts[i].showContact());
			s.append("\n");
		}
		return s;
	}

};

