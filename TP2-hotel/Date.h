#ifndef DATE_H
#define DATE_H

class Date
{
	public:
	Date(int day, int month, int year);
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	private:
	int day_;
	int month_;
	int year_;

};
#endif 