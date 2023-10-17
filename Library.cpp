#include "Library.h"
#include <iostream>


Library::Library(std::vector<Librarian> _Librarians, std::vector<Reader> _Readers, std::vector<Book> _Books):
Librarians(_Librarians),Readers(_Readers),Books(_Books) {
	this->Librarians = _Librarians;
	this->Readers = _Readers;
	this->Books = _Books;
}

std::vector<Librarian> Library::getLibrarians() const
{
	return Librarians;
}

std::vector<Reader> Library::getReaders() const
{
	return Readers;
}

std::vector<Book> Library::getBooks() const
{
	return Books;
}


std::vector<Librarian> Library::setLibrarian(int index, Librarian sLibrarian)
{
	Librarians[index] = sLibrarian;
}

std::vector<Reader> Library::setReader(int index, Reader sReader)
{
	Readers[index] = sReader;
}

std::vector<Book> Library::setBook(int index, Book sBook)
{
	Books[index] = sBook;
}

void Library::addLibrarian(Librarian nLibrarian)
{
	Librarians.push_back(nLibrarian);
}

void Library::addReader(Reader nReader)
{
	Readers.push_back(nReader);
}

void Library::addBook(Book nBook)
{
	Books.push_back(nBook);
}
