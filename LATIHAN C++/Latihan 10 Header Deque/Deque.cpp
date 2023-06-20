#include <deque>
#include <iostream>
#define MAX 20 // maximum data queue

std::deque<int> Q1,Q3 ;
std::deque<char> Q2 ;


int main(){
//  =======================================MENGIMPLEMENTASIKAN push_back(), push_front(), membuat iterator===========================	
	//menggunakan deque.push_back() untuk menambahkan data ke urutan yang paling belakang
	for (int i = 0; i < 4; i++){
		Q1.push_back(i*i);
		Q2.push_back(65+i);
	}
	Q3 = Q1; //Q1 ditugaskan ke Q3

	Q3.push_front(20);
	Q3.push_back(20*20);
	
	//mengeluarkan isi dari class deque yang telah kita buat
	for (int j=0; j < 4; j++){
		std::cout<< Q1[j] << "\t" << Q2[j] << std::endl;
	}
	
	std::cout << "\nUkuran dari Q3 = " << Q3.size() << std::endl;
	std::cout << "Element-Element dari Q3 adalah: " << std::endl;
	
	//membuat iterator
	std::deque<int>:: iterator myIter ;
	
	//menampilkan nilai dari Q3
	for (myIter = Q3.begin() ; myIter < Q3.end() ; myIter++) {
		std::cout << *myIter << " ";
	}
//	=============================================================================================================================

//  ========================================MENGIMPLEMENTASIKAN pop_back(), pop_front(),size()===================================
		
		std::deque<double> Q4 ;
		
	//push_back()
		for (int i = 0; i < 7; i++){
			Q4.push_back(1.5*i);
		}
		
		std::cout << "\n\n";
		
	std::cout << "Ukuran dari Q4 adalah: " << Q4.size() << std::endl;
	std::cout << "Element-Element queue Q4 adalah: " << std::endl;
	
		for (int j= 0; j < 7 ; j++){
			std::cout << " " << Q4[j] << " " << std::endl;
		}
	
	//size()
	std::cout << "ukuran dari Q4 adalah: " << Q4.size() << std::endl;
		
	//pop_front()
	Q4.pop_front();
	
	//pop_back()
	Q4.pop_back();
	
	
	//menammpilkan setelah operasi pop_back dan pop_front
	std::cout << "Sekarang ukuran dari Q4 adalah: " << Q4.size() << std::endl;
	
	//membuat iterator lagi
	std::deque<double>::iterator myIterD;
	
	//menampilkan element-elementnya Q4 setelah pop_back dan pop_front()
	std::cout << "\nDan Element-Elementnya adalah: " << std::endl;
	for(myIterD = Q4.begin(); myIterD < Q4.end(); myIterD++)
	{
		std::cout << *myIterD << std::endl; 
	}
		
return 0;	
}
