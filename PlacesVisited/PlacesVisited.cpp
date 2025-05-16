#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Hobbies {
	Coding,
	Family,
	Working,
	Dog
};

enum Visited {
	NYC,
	Vermont,
	NiagaraFalls,
	Florida
};



int main() {

	Hobbies hob{};
	std::vector<Hobbies> hobbies{ Hobbies::Coding, Hobbies::Dog, Hobbies::Working, Hobbies::Family };

	Visited vis{};
	std::vector<Visited> visit{ Visited::Florida,Visited::NYC, Visited::NiagaraFalls };

	for (auto& visited : visit) {

		switch (visited) {

		case Visited::Florida:
			cout << "1: Florida" << endl;
			break;

		case Visited::NiagaraFalls:
			cout << "2: NiagaraFalls" << endl;
			break;
		
		case Visited::Vermont:
			cout << "3: Vermont" << endl;
			break;
			
		case Visited::NYC:
			cout << "4: NYC" << endl;
			break;
		
		}


	}

	cout << endl;

	for (auto& ho : hobbies) {

		switch (ho) {

		case Hobbies::Coding :
			cout << "1: Coding" << endl;
			break;

		case Hobbies::Dog:
				
			cout << "2: Dog" << endl;
			break;

		case Hobbies::Family:
			cout << "3: Family" << endl;
			break;
		case Hobbies::Working:
			cout << "4: Working" << endl;
			break;
		}
	}

	system("pause > 0");
	return 0;
}