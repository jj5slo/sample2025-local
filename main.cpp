#include<iostream>

int func2(int x, int y){
	return x*x + y*y;
}

int function(int x){
	return x*x;
}

int main(void){
	
	std::cout << "git" << std::endl;
	std::cout << "GIT" << std::endl;

		for(int i=0; i<10; i++){
	 		std::cout << i << std::endl;
		}
	
	std::cout << function(3) << std::endl;
	std::cout << func2(3,2) << std::endl;

	return 0;

}
