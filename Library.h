#pragma once
#include <vector>
#include <string>
#include "Librarian.h"
#include "Reader.h"
#include "Books.h"
class Library{
private:
	std::vector<Librarian> Librarians;
	std::vector<Reader> Readers;
	std::vector<Book> Books;
public:
	Library(std::vector<Librarian> _Librarians, std::vector<Reader> _Readers, std::vector<Book> _Books);

	//get
	std::vector<Librarian> getLibrarians() const;
	std::vector<Reader> getReaders() const;
	std::vector<Book> getBooks() const;

	//set
	std::vector<Librarian> setLibrarian(int index, Librarian sLibrarian);
	std::vector<Reader> setReader(int index, Reader sReader);
	std::vector<Book> setBook(int index, Book sBook);

	//add
	void addLibrarian(Librarian nLibrarian);
	void addReader(Reader nReader);
	void addBook(Book nBook);
};

