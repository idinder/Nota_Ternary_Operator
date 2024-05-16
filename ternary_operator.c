// ternary operator
/* ternary operator, atau dikenali sebagai conditional operator
 adalah cara yang singkat dan mudah untuk menggunakan if else
 statement dalam coding.
 
 ternary operator sesuai digunakan untuk :
 1. gantikan if else statement yang mudah (ada 1 syarat sahaja)
 NAMUN,
 tidak sesuai digunakan untuk gantikan if else statement yang complex (lebih dari 1 syarat).
 
 syntax untuk ternary operator :
   condition ? Expression1 : Expression2 ;
 
 macam ni benda ni berfungsi,
 1. condition atau syarat akan dinilai (cek adakah syarat lepas(true) atau tak lepas(false))
 2. kalau condition adalah true, Expression1 akan diexecute.
 3. dan kalau condition adalah false, Expression 2 akan diexecute.

  */
  
  
// Contoh Penggunaan Ternary Operator :

#include <stdio.h>
 
int main(){
	
	int age;
	
	// Condition/Syarat adalah (age == 18), kemudian dinilai adakah age bersamaan dengan 18; kalau true Expression1 akan diexecute.
    // dan kalau false pula, Expression2 akan diexecute.
    
    // Expression1 belah kiri | Expression2 belah kanan
    
	age = 18; // age diberi nilai 18 yang menepati syarat/condition yang diberi.
	(age == 18) ? printf("Umur kau 18\n") : printf("Umur kau bukan 18\n"); // Expression1 akan diexecute.
	
	
	age = 20;// age diberi nilai 20 TIDAK menetapi syarat/condition.
	(age == 18) ? printf("Umur kau 18\n") : printf("Umur kau bukan 18\n"); // Expression2 akan diexecute.
	
	
	// Contoh Lain : 
	
	// Nak cek nombor genap atau ganjil menggunakan ternary operator.
	
	int number;
		
	printf("Letakkan nombor :");
	scanf("%d", &number);
	
	// condition nya adalah jika nombor dibahagi 2 memberi baki 0 (modulo operation)
    (number % 2 == 0) ? printf("Nombor Genap\n") : printf("Nombor Ganjil\n");
    // kalau condition nya true, Ia adalah nombor genap, kalau false ia adalah nombor ganjil.
    
    // selesai sudah.
    
    /* NOTA TAMBAHAN untuk idin :P :
    
    - cara untuk cek adakah nombor itu genap atau ganjil dalam matematik adalah dengan bahagi nombor tersebut dengan 2
    dan tengok kalau ada baki pembahagian tersebut adalah 1(nombor ganjil) ataupun 0(nombor genap)
    
    - REAL NUMBER atau floating-point number atau nombor yang ada titik perpuluhan tidak boleh dikategorikan
    sebagai nombor genap atau ganjil. Nombor genap dan ganjil hanya boleh dipakai untuk nombor bulat sahaja.
    
	*/
  
 return 0;
}
