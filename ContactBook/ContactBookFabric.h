#pragma once
#include <string>
#include <fstream>
#include "ContactBook.h" 
using namespace std;
class ContactBookFabric
{

private:

	string path;
	ifstream in; // read
	ofstream out; //write

public:
	ContactBookFabric(string path) {
		this->path = path;
	}
	ContactBook getContactBook() {
		ContactBook book;
		in.open(path);
		
		if (in.is_open()) {
			
			while (!in.eof()) {
				string databuf[7];
				for (size_t i = 0; i < 7; i++)
				{
					string buf;
					getline(in, buf);
					databuf[i] = buf;

				}
				Contact c(databuf[0].c_str(), databuf[1].c_str(), databuf[2].c_str(), databuf[3].c_str(), databuf[4].c_str(), databuf[5].c_str(), databuf[6].c_str());
				
			}


		}
	}
};

