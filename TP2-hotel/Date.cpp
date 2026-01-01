#include "Date.h"

Date::Date(int day, int month, int year)
	: day_(day), month_(month), year_(year) {
	if (month_ < 1 || month_ > 12) {
		throw "Invalid month";
	}
	if (day_ < 1 || day_ > 31) {
		throw "Invalid day";
	}
}

int Date::getDay() const {
	return day_;
}	

int Date::getMonth() const {
	return month_;
}	

int Date::getYear() const {
	return year_;
}	


