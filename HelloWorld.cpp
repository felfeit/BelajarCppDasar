#include <iostream>

namespace Const {
	static void run() {
		// Kata kunci (keyword) const menunjukkan bahwa nilai dari suatu variabel
		// bernilai konstan, sehingga memberitahu compiler untuk mencegah apapun
		// dari mengubahnya (read-only)

		const double PI = 3.14159;
		double radius = 10;
		double circumference = 2 * PI * radius;

		std::cout << circumference << "cm" << std::endl;
	}
}

namespace Input {
	static void run() {
		int x;

		std::cin >> x;
		std::cout << "Nilai yang anda masukan adalah: " << x << std::endl;

		std::cin.get();
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

		using std::cout; // Alternatif yang lebih aman daripada menggunakan namespace std 
		using std::endl;
		using std::string;

		// Namespace = menyediakan solusi untuk mencegah konflik penamaan
		// di project besar. Setiap entity membutuhkan nama yang unik.
		// Sebuah namespace mengizinkan untuk menamakan suatu entitas
		// dengan identik selama namespace nya berbeda

		int x = 0;

		// Tanpa menggunakan namespace std
		std::cout << x << std::endl; // Mencetak nilai variabel x di dalam scope main

		// Menggunakan namespace std
		// Tidak perlu menyertakan prefix untuk mencetak output
		cout << first::x << endl; // Mencetak nilai variabel x dari namespace first

		// Atau juga bisa digunakan untuk mendeklarasi string
		string name = "Bro";
	}
}

namespace TipeData {
	static void run() {
		// integer (Bilangan Bulat)
		int age = 21;
		int year = 2025;

		// double (Bilangan Pecahan)
		double price = 10.99;
		double gpa = 2.5;
		double temperature = 25.1;

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

		std::cout << "Hello " << name << std::endl;
		std::cout << "You are " << age << " years old" << std::endl;
	}
}

namespace Variabel {
	static void run() {
		int x; // Deklarasi
		x = 5; // Menetapkan nilai 5 pada variable x

		int y = 10; // Menetapkan nilai langsung pada deklarasi variable

		std::cout << y;
	}
}

int main() {
	std::cout << "Hello World" << std::endl;
	return 0;
}