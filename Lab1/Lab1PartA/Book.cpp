#include "Book.h"

//book price starts at 0

Book::Book() {
	netPrice = 0;
}

Book::Book(double price) {
	netPrice = price;
}

double Book::getGrossPrice() {
	return netPrice;
}
