#include <iostream>

using std::cout;
using std::endl;
using std::cin;

namespace Const {
	static void run() {
		// Kata kunci (keyword) const menunjukkan bahwa nilai dari suatu variabel
		// bernilai konstan, sehingga memberitahu compiler untuk mencegah apapun
		// dari mengubahnya (read-only)

		const double PI = 3.14159;
		double radius = 10;
		double circumference = 2 * PI * radius;

		cout << circumference << "cm" << endl;

		cin.get();
	}
}

namespace Input {
	static void run() {
		int x;

		cin >> x;
		cout << "Nilai yang anda masukan adalah: " << x << endl;

		cin.get();
	}
}

namespace Namespace {
	namespace first {
		int x = 1;
	}

	namespace second {
		int x = 2;
	}

	namespace third {
		int x = 3;
	}

	static void run() {
		// Menggunakan namespace std
		// using namespace std;

		using std::string; // Alternatif yang lebih aman daripada menggunakan namespace std 

		// Namespace = menyediakan solusi untuk mencegah konflik penamaan
		// di project besar. Setiap entity membutuhkan nama yang unik.
		// Sebuah namespace mengizinkan untuk menamakan suatu entitas
		// dengan identik selama namespace nya berbeda

		int x = 0;

		// Tanpa menggunakan namespace std
		cout << x << endl; // Mencetak nilai variabel x di dalam scope main

		// Menggunakan namespace std
		// Tidak perlu menyertakan prefix untuk mencetak output
		cout << first::x << endl; // Mencetak nilai variabel x dari namespace first

		// Atau juga bisa digunakan untuk mendeklarasi string
		string name = "Bro";

		cin.get();
	}
}

namespace TipeData {
	static void run() {
		// integer (Bilangan Bulat)
		int a = 5; // 32 Bit
		long b = 6; // 64 Bit
		short c = 1;

		// Melihat ukuran alokasi memori dari variabel a yang bertipe data int
		cout << sizeof(a) << endl;

		// Melihat angka terbesar yang bisa di asign dari tipe data int
		cout << std::numeric_limits<int>::max() << endl;

		// Melihat angka terkecil yang bisa di asign dari tipe data int
		cout << std::numeric_limits<int>::min() << endl;

		int age = 21;
		int year = 2025;

		// Bilangan Pecahan
		double price = 10.99;
		double gpa = 2.5;
		double temperature = 25.1;
		float d = 2.8;

		// char (Huruf / Karakter Tunggal)
		char grade = 'A';
		char initial = 'B';

		// boolean (true atau false)
		bool forSale = false;
		bool isPowered = true;

		// string (object yang merepresentasikan kumpulan text)
		std::string name = "Bro";
		std::string day = "Friday";
		std::string food = "Pizza";

		cout << "Hello " << name << endl;
		cout << "You are " << age << " years old" << endl;

		cin.get();
	}
}

namespace Variabel {
	static void run() {
		int x; // Deklarasi
		x = 5; // Menetapkan nilai 5 pada variable x

		int y = 10; // Menetapkan nilai langsung pada deklarasi variable

		cout << y;

		cin.get();
	}
}

namespace Aritmatika {
	static void run() {
		// Operator Aritmatika
		// Penjumlahan, Pengurangan, Perkalian, Pembagian, Modulus
		// +, -, *, /, %

		int a = 10;
		int b = 2;
		int hasil;

		// Penjumlahan
		hasil = a + b;
		cout << a  << " + " + b << " = " << hasil << endl;

		// Pengurangan
		hasil = a - b;
		cout << a << " - " + b << " = " << hasil << endl;

		// Perkalian
		hasil = a * b;
		cout << a << " * " + b << " = " << hasil << endl;

		// Pembagian
		hasil = a / b;
		cout << a << " / " + b << " = " << hasil << endl;

		// Modulus
		hasil = a % b;
		cout << a << " % " + b << " = " << hasil << endl;
		
		cin.get();
	}
}

namespace Komparasi {
	static void run() {
		int a = 1;
		int b = 2;

		bool result1, result2;

		// Komparasi, Relation Expression

		// Sebanding
		result1 = (a == b);
		cout << result1 << endl;

		// Tidak Sebanding
		result2 = (a != b);
		cout << result2 << endl;

		// Kurang dari
		result1 = (a < b);
		cout << result1 << endl;

		// Lebih dari
		result2 = (a > b);
		cout << result2 << endl;

		cin.get();
	}
}

namespace OperatorLogika {
	static void run() {
		int a = 2;
		int b = 3;

		bool result;

		// Not
		cout << "Operator Not" << endl;
		result = !(a == 2);
		cout << result << endl;

		// And
		// Menghasilkan nilai true jika kedua kondisi bernilai true
		cout << "Operator And" << endl;
		result = (a == 2) and (b == 3); // true and true
		cout << result << endl;

		result = (a == 3) and (b == 3); // false and true
		cout << result << endl;

		result = (a == 2) && (b == 4); // true and false
		cout << result << endl;

		result = (a == 3) && (b == 4); // false and false
		cout << result << endl;

		// Or
		// Menghasilkan nilai true jika salah satu kondisi bernilai true
		cout << "Operator Or" << endl;
		result = (a == 2) or (b == 3); // true or true
		cout << result << endl;

		result = (a == 3) or (b == 3); // false or true
		cout << result << endl;

		result = (a == 2) || (b == 4); // true or false
		cout << result << endl;

		result = (a == 3) || (b == 4); // false or false
		cout << result << endl;

		cin.get();
	}
}

namespace OperatorPercabangan {
	static void run() {
		int a;

		cout << "Masukkan Angka = ";
		cin >> a;

		// If Statement
		// Kondisi dalam bentuk boolean
		if (a < 3) {
			cout << "Nilai adalah = " << a << endl;
		}

		cout << "Selesai" << endl;

		// If - Else Statement

		if (a == 5) {
			cout << "Nilai ini merupakan 5" << endl;
		} 
		else {
			cout << "Nilai ini bukan 5" << endl;
		}

		// If - Else If - Else Statement
		if (a == 5) {
			cout << "Nilai ini merupakan 5" << endl;
		}
		else if (a == 3) {
			cout << "Nilai ini merupakan 3" << endl;
		}
		else {
			cout << "Nilai ini selain 5 ataupun 3" << endl;
		}

		// Switch Case Statement

		switch (a) {
		case 1:
			cout << "a = 1" << endl;
			break;

		case 2:
			cout << "a = 2" << endl;
			break;

		default:
			cout << "default" << endl;
		}

		cout << "Selesai" << endl;

		cin.get();
	}
}

int main() {
	return 0;
}