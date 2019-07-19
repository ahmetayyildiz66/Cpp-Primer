/*
 * while.cpp
 *
 *  Created on: Jul 19, 2019
 *      Author: MONSTER
 */
#include <iostream>

int main(){
	int sum = 0, v1 = 0, v2 = 0;
	std::cout<<"Enter to values: "<<std::endl;
	std::cin>> v1 >> v2;
	std::cout<<"v1: "<<v1<<" v2 :"<<v2;
	while(v1 < v2){
		sum += v1;
		v1++;
	}
	std::cout<<"Result: "<<sum;
}


