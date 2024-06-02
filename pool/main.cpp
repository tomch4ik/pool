#include <iostream>
using namespace std;
class Reservoir {
	private:
	    char* name;
	    long double width;
	    long double length;
	    long double depth;
	
	public:
	    Reservoir() : width(0), length(0), depth(0)
		{
		}
	    Reservoir(const char* n, long double width, long double length, long double depth) : width(width), length(length), depth(depth)
		{
			name = new char[strlen(n) + 1];
			strcpy_s(name, strlen(n) + 1, n);
		}
		long double volume()
	    {
	        return width * length * depth;
	    }
		long double square()
	    {
	        return width * length;
	    }
	    char* getName()
	    {
	        return name;
	    }
		~Reservoir() 
		{
			delete[] name;
		}
	};
	
	int main() {
	    Reservoir river("Pripyat", 0.7, 775, 0.003);
	    cout << "Volume -> " << river.getName() << ": " << river.volume()<<endl;
	    cout << "Square -> " << river.getName() << ": " << river.square() <<endl;
	    Reservoir lake("Synevyr", 0.32, 0.44, 0.022);
	    cout << "Volume -> " << lake.getName() << ": " << lake.volume() << endl;
	    cout << "Square -> " << lake.getName() << ": " << lake.square() << endl;
	    if (river.square()==lake.square())
		{
	        cout << "One types"<<endl;
	    }
	    else
		{
	        cout << "Different types"<<endl;
	    }
	}