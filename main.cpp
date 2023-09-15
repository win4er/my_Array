#include<iostream>

template<class T, size_t size>
class Array {
    private: 
        T* ar;
    public:
	Array() {
	    ar = new T[size];
	}
	int length() {
	    return size;
	}
	T& operator[](int value) {
	    return ar[value];
	}

	T at(int value) const {
	    return ar[value];
	}
};

template<class T, size_t size>
std::ostream& operator<<(std::ostream& out, const Array<T, size>& value) {
	for (size_t i=0; i < size; i++) {
		out <<value.at(i)<<" ";
    	}
	return out;
}
int main() {
	Array<double, 10> myArray;
	myArray[9] = 10;
	std::cout << myArray.length() << std::endl;
	std::cout << myArray << std::endl;
	return 0;
}
