const keyword dapat dideklarasikan bersama dengan variabel pointer.
contoh : const char *var = "NAMA";
	atau-> char const *var = "NAMA; 
deklarasi diatas sama saja.


bebrapa variasi penggunaan const:
	1. const tipedata *nama-variabel = &address; - contoh: const int* i = &address; nilai *i constant
	2. tipedata* const nama-variabel = &address; - contoh: int* const i = &address; nilai *i bisa diubah
	3. const tipedata nama-variabel = nilai; - contoh: const int i = 5; variabel i sudah tidak bisa diganggu gugat
	4. const tipedata* const nama-variabel = &address; - contoh: const int* const i = &address; maka baik nilai maupun address sudah tidak bisa diubah, misal *i = 8; / i = &address; keduanya akan eror.
	5.
