#pragma once
#include <string>
class Book{
private:
	std::string title;
	std::string author;
	std::string pages;
public:
	Book(std::string _title,std::string _author,std::string _pages);

	//get
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getPages() const;

	//set
	void setTitle(std::string newTitle);
	void setAuthor(std::string newAuthor);
	void setPages(std::string newPages);

	//enum
	enum Period{Weekly=7,twoWeeks=14,Montly=30,threeMonths=90};
};

