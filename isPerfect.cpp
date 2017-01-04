#include <iostream>

bool isPerfect(int n);


int main() {
bool x;
for (int i=1;i<100000;i++) {
	if ((x=isPerfect(i))) {
		std::cout<<i<<"is perfect"<<std::endl;
		}
	}
return 0;
}

bool isPerfect(int n) {
	int sum=0;
	for (int i=1;i<n;i++) {
		if ((n%i)==0) {
			sum+=i;
			}
		else {
			continue;
			}
		}
	if (sum==n) {
		return true;
		}
	else {
		return false;
		}
}
