
#include "Main.h"
#include "Instalock.h"

int main() {
	Title();
	Space();
	Log2("Character to Instalock:");
	Log2("1: Jett");
	Log2("2: Skye");
	Log2("3: Reyna");
	Log2("4: Yoru");
	Log2("5: Fade");
	Log2("6: Chamber");
	Log2("7: Raze");
	Space();
	Log("Selection: ");
	std::cin >> Character;
	Space();
	if (Character == "1") {
		JettLock();
	}
	if (Character == "2") {
		SkyeLock();
	}
	if (Character == "3") {
		ReynaLock();
	}
	if (Character == "4") {
		YoruLock();
	}
	if (Character == "5") {
		FadeLock();
	}
	if (Character == "6") {
		ChamberLock();
	}
	if (Character == "7") {
		RazeLock();
	}
}
