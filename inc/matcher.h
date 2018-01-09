
#include <list>
#include <vector>

class Matcher
{

public:
	Matcher();
	~Matcher();

	void run();
	void readImage(const std::string & imageName);

private:
	std::list<std::vector<std::string>> imageList;
};