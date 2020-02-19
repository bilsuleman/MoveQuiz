class square
{
private:
	int a;
public:

	// Copy assignment and copy constructor
	square& operator=(const square& right);
	square(const square&);

	// Default constructor and regular constructor
	square();
	square(int input);

	// Move Assignment and Move Constructor
	square& operator=(square&&);
	square(square&&);

	// Destructor
	~square();

	int setA(int input);
	int getA();
};