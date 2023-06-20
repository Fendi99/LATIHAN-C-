#include <iostream>
#include <new>
 
 int count = 1 ;
 
int main()
{
    while (true) {
        int* p = new(std::nothrow) int[100000000]; // non-throwing overload
        
        if (p == nullptr) {
            std::cout << "Allocation mendapatkan nullptr\n";
			break;
        }else{
        	count++;
            std::cout << count << "Berhasil di alokasi\n";
        }
    }
}
