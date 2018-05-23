//*********************************************
// Student Name: Sammy Robens-Paradise
// Student Number: 20709541
//
// SYDE 121 Lab: 9 Assignment: 1
//
// Filename: Use_Date_3.dev
// Date submitted: 2017-011-20
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//*********************************************
// project:  UseDate
// file:     Date.cpp
//

#include "Date.h"

bool is_leap( const int year ) {
	return ( ( year % 4 == 0 ) && ( year % 100 != 0 ) ) || ( year % 400 == 0 );
}

int days_in_month( const int year, const int month ) {
	const int num_days[] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	if ( month <= 0 || month > 12 ) {
		cout << "Month value is outside of bounds. Exitting." << endl;
		system("pause");
		exit(1);
	}

	if ( year < FIRST_VALID_YEAR ) {
		cout << "Year is less than first valid year.  Exitting" << endl;
		system("pause");
		exit(1);
	}

	int result = 0;

	if ( month == 2 && is_leap( year ) )
		result = 29;
	else
		result = num_days[month - 1];

	return result;
}

Date::Date()
	: is_valid_( false ) {
}

Date::Date( const int init_year, const int init_month, int const init_day )
	: year_( init_year ), month_( init_month ), day_( init_day ) {
	if ( year_ < FIRST_VALID_YEAR )
		is_valid_ = false;
	else if ( month_ <= 0 || month_ > 12 )
		is_valid_ = false;
	else if ( day_ <= 0 || day_ > days_in_month( year_, month_ ) )
		is_valid_ = false;
	else
		is_valid_ = true;
}

bool Date::is_valid() const {
	return is_valid_;
}
//this function backs up user defined number of days from inputted flight day.
void Date::backup() {
	check(is_valid_);//checks to made sure date is valid
	day_--;//decrement day
	if( day_ == 0) { //check to see if still in same month, if no, decrement month
		month_--;
		if(month_ !=0) {
			day_=days_in_month(year_,month_);
		} else {
			year_--; //check to see if still in same year, if no, decrement year
			if(year_<FIRST_VALID_YEAR) {
				check(is_valid_);//check to make sure still in valid year
			} else {
				month_ =12;
				day_ = days_in_month(year_,month_);
			}
		}
	}
}



int Date::get_year() const {
	check(is_valid_);
	return year_;
}

int Date::get_month() const {
	check(is_valid_);
	return month_;
}

int Date::get_day() const {
	check(is_valid_);
	return day_;
}

void Date::print() const {
	if ( is_valid() ) {
		cout << year_ << '.';
		if ( month_ < 10 )
			cout << '0';
		cout << month_ << '.';
		if ( day_ < 10 )
			cout << '0';
		cout << day_;
	} else
		cout << "DATE_NOT_VALID" << endl;
}

bool Date::is_earlier_than( const Date &other ) const {
	check(is_valid_);
	check(other.is_valid_);

	bool result = false;

	if ( year_ != other.year_ )
		result = ( year_ < other.year_ );
	else if ( month_ != other.month_ )
		result = ( month_ < other.month_ );
	else
		result = ( day_ < other.day_ );

	return result;
}
//this functio checks to ensure that the date entered is a valid date
void Date::check(bool a) const {
	if ( ! ( a ) ) { 
		cout << "Not valid. Exitting." << endl;
		system("pause");
		exit(1);
	}
}
//end of code
