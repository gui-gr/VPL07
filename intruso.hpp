#include <string>
#include <iostream>
#include <cstring>
#include <vector>
#include <list>

class Intruso {
	/*Continue a implementação da classe Intruso*/

	std::vector< std::vector< std::pair<int,int> > > digitadas;
	
	public:
	
	void set_senha_vazada(std::string vazou);
	std::string crack_senha();
};