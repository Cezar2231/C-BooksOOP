#include "Books.h"

Book::Book(std::string _title, std::string _author, std::string _pages) : title(_title),author(_author),pages(_pages)
{
	this->title = _title;
	this->author = _author;
	this->pages = _pages;
}

std::string Book::getTitle() const
{
	return title;
}

std::string Book::getAuthor() const
{
	return author;
}

std::string Book::getPages() const
{
	return pages;
}

void Book::setTitle(std::string newTitle)
{
	title = newTitle;
}

void Book::setAuthor(std::string newAuthor)
{
	author = newAuthor;
}

void Book::setPages(std::string newPages)
{
	pages = newPages;
}
