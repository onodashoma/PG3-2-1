#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;


int main() {
	std::list<const char*>YamateLineList{
	"komagome","tabata","nippori","uguisudani","ueno","okachimachi","akihabara",
	"kanda","tokyo","yurakucho","shimbashi","hamamatsucho","tamachi",
	"shinagawa","osaki","gotanda","meguro","ebisu","shibuya","harajuku","yoyogi",
	"shinjuku","shin-Okubo","takadanobaba","mejiro","ikebukuro","otsuka","sugamo"
	};

	printf("1970年\n");

	for (std::list<const char*>::iterator itr = YamateLineList.begin(); itr != YamateLineList.end(); ++itr)
	{
		cout << *itr << "|";
	}

	for (std::list<const char*>::iterator itr = YamateLineList.begin(); itr != YamateLineList.end(); ++itr)
	{
		if (strcmp(*itr, "nippori") == 0) 
		{
			itr = YamateLineList.insert(itr, "nishinippori");
			++itr;
		}
	}
	printf("2019年\n");
	for (std::list<const char*>::iterator itr = YamateLineList.begin(); itr != YamateLineList.end(); ++itr)
	{
		cout << *itr << "|";
	}
	for (std::list<const char*>::iterator itr = YamateLineList.begin(); itr != YamateLineList.end(); ++itr)
	{
		if (strcmp(*itr, "shinagawa") == 0)
		{
			itr = YamateLineList.insert(itr, "takanawaGateway");
			++itr;
		}
	}
	printf("\n2022年\n");
	for (std::list<const char*>::iterator itr = YamateLineList.begin(); itr != YamateLineList.end(); ++itr)
	{
		cout << *itr << "|";
	}

}