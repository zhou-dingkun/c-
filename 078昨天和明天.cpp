#include<bits/stdc++.h>
using namespace std;
int main() {
	int year,month,day;
	int lyear,lmonth,lday;
	int wyear,wmonth,wday;
	cin>>year>>month,day;
	lmonth=month-1;
	lyear=year;
	if(day==1) {
		if(lmonth==1||lmonth==3||lmonth==5||lmonth==7||lmonth==8||lmonth==10||lmonth==0) {
			lday=31;
			if(lmonth==0) {
				lmonth=12;
				lyear=year-1;
			}
		} else {
			if(lmonth==4||lmonth==6||lmonth==9||lmonth==11) {
				lday=30;
			} else {
				if(year%4==0&&year%100!=0||year%400==0) {
					lday=29; 
				} else {
					lday=28;
				}
			}
		}

	} else {
		if(day==30||day==29||day==28||day==31) {
			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) {
				if(day==31) {
					wday=1;
					wmonth=month+1;
					wyear=year;
					if(month==12) {
						wyear=year+1;
						wday=1;
						wmonth=1;
					}
				}
			} else {
				if(month==4||month==6||month==9||month==11) {
					if(day==30) {
						wday=1;
						wmonth=month+1;
						wyear=year;
					}
				} else {
					if(year%4==0&&year%100!=0||year%400==0) {
						if(day==29) {
							wday=1;
							wmonth=month+1;
						}
					} else {
						if(day==28) {
							wday=1;
							wmonth=month+1;
						}
					}
				}
			}
		} else {
			lday=day-1;
			lmonth=month;
			lyear=year;
			wday=day+1;
			wmonth=month;
			wyear=year;
		}

	}
cout<<lday<<' '<<lmonth<<' '<<lyear<<endl;
cout<<wday<<' '<<wmonth<<' '<<wyear<<endl;
}
