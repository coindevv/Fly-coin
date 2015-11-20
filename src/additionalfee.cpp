#include "base58.h"
#include "additionalfee.h"
#include <boost/assign/list_of.hpp>

int64_t AdditionalFee::GetAdditionalFeeFromTable(int64_t additionalFeeValue) //keesdewit
{
	if (additionalFeeValue < 0.001)
		return 0.00001;
	
	if (additionalFeeValue >= 0.001 && additionalFeeValue < 0.01)
		return 0.0001;
	
	if (additionalFeeValue >= 0.01 && additionalFeeValue < 0.1)
		return 0.001;		
	
	if (additionalFeeValue >= 0.1 && additionalFeeValue < 1)
		return 0.01;	
	
	if (additionalFeeValue >= 1 && additionalFeeValue < 1.5)
		return 0.15;	
	
	if (additionalFeeValue >= 1.5 && additionalFeeValue < 2)
		return 0.2;			
	
	if (additionalFeeValue >= 2 && additionalFeeValue < 2.5)
		return 0.25;					
	
	if (additionalFeeValue >= 2.5 && additionalFeeValue < 3)
		return 0.3;	

	if (additionalFeeValue >= 3 && additionalFeeValue < 3.5)
		return 0.4;			
	
	if (additionalFeeValue >= 3.5 && additionalFeeValue < 4)
		return 0.5;		

	if (additionalFeeValue >= 4 && additionalFeeValue < 4.5)
		return 0.55;

	if (additionalFeeValue >= 4.5 && additionalFeeValue < 5)
		return 0.7;
	
	if (additionalFeeValue >= 5 && additionalFeeValue < 5.5)
		return 0.8;

	if (additionalFeeValue >= 5.5 && additionalFeeValue < 6)
		return 0.95;

	if (additionalFeeValue >= 6 && additionalFeeValue < 6.5)
		return 1;

	if (additionalFeeValue >= 6.5 && additionalFeeValue < 7)
		return 1.3;

	if (additionalFeeValue >= 7 && additionalFeeValue < 7.5)
		return 1.6;

	if (additionalFeeValue >= 7.5 && additionalFeeValue < 8)
		return 1.8;

	if (additionalFeeValue >= 8 && additionalFeeValue < 8.5)
		return 1.9;

	if (additionalFeeValue >= 8.5 && additionalFeeValue < 9)
		return 2;

	if (additionalFeeValue >= 9 && additionalFeeValue < 10)
		return 2.2;

	if (additionalFeeValue >= 10 && additionalFeeValue < 15)
		return 2.5;

	if (additionalFeeValue >= 15 && additionalFeeValue < 20)
		return 3;

	if (additionalFeeValue >= 20 && additionalFeeValue < 25)
		return 4.5;

	if (additionalFeeValue >= 25 && additionalFeeValue < 30)
		return 5.7;

	if (additionalFeeValue >= 30 && additionalFeeValue < 35)
		return 6.8;

	if (additionalFeeValue >= 35 && additionalFeeValue < 40)
		return 8.2;

	if (additionalFeeValue >= 40 && additionalFeeValue < 45)
		return 12;

	if (additionalFeeValue >= 45 && additionalFeeValue < 50)
		return 15;

	if (additionalFeeValue >= 50 && additionalFeeValue < 60)
		return 17;

	if (additionalFeeValue >= 60 && additionalFeeValue < 70)
		return 22;

	if (additionalFeeValue >= 70 && additionalFeeValue < 80)
		return 26;

	if (additionalFeeValue >= 80 && additionalFeeValue < 90)
		return 30;

	if (additionalFeeValue >= 90 && additionalFeeValue < 100)
		return 35;

	if (additionalFeeValue >= 100 && additionalFeeValue < 120)
		return 45;

	if (additionalFeeValue >= 120 && additionalFeeValue < 140)
		return 60;

	if (additionalFeeValue >= 140 && additionalFeeValue < 160)
		return 72;

	if (additionalFeeValue >= 180 && additionalFeeValue < 200)
		return 90;

	if (additionalFeeValue >= 200 && additionalFeeValue < 250)
		return 100;

	if (additionalFeeValue >= 250 && additionalFeeValue < 300)
		return 120;

	if (additionalFeeValue >= 300 && additionalFeeValue < 400)
		return 160;

	if (additionalFeeValue >= 400 && additionalFeeValue < 500)
		return 185;

	if (additionalFeeValue >= 500 && additionalFeeValue < 600)
		return 220;

	if (additionalFeeValue >= 600 && additionalFeeValue < 700)
		return 260;

	if (additionalFeeValue >= 700 && additionalFeeValue < 800)
		return 300;

	if (additionalFeeValue >= 800 && additionalFeeValue < 900)
		return 350;

	if (additionalFeeValue >= 900 && additionalFeeValue < 1000)
		return 500;

	if (additionalFeeValue >= 1000 && additionalFeeValue < 2000)
		return 999;
	
	if (additionalFeeValue >= 2000 && additionalFeeValue < 4000)
		return 1999;

	if (additionalFeeValue >= 4000 && additionalFeeValue < 6000)
		return 3999;

	if (additionalFeeValue >= 6000 && additionalFeeValue < 8000)
		return 5999;
	

	return additionalFeeValue * 99 / 100;		
}
	
bool AdditionalFee::IsInFeeExcemptionList(CTxDestination destination) //keesdewit
{
	std::map<CTxDestination, std::string> groupList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("FNcVD1aUpaaJBsqiuyLvbtS4TaJ3HaoBjN").Get()), "Vegasguy")
	(CTxDestination(CBitcoinAddress("F7Lv4KtwfthnUJZMgAKM1fWBv8SPyxKzeH").Get()), "metamorphin")
	(CTxDestination(CBitcoinAddress("FLB4LH3S4vJmjJGaRcJnsE6tjuBm7QkrGu").Get()), "Woody20285")
	(CTxDestination(CBitcoinAddress("FMzTY4pPwaqsaVq429xy4mrGpRowsH17xm").Get()), "Woman A")
	(CTxDestination(CBitcoinAddress("FNu4TpNNfJymE9t1T8KT2X6s51Y2zYUWps").Get()), "Europecoin")
	(CTxDestination(CBitcoinAddress("FNHgEQBKCHQkMMYL8dqE6xt38bRNPg4NPa").Get()), "Mrs_Dandy4200")
	(CTxDestination(CBitcoinAddress("FHMjQjT3x1NiX2azJ27aFN6kiqdhUGwYFX").Get()), "Pokeytex")
	(CTxDestination(CBitcoinAddress("FRPBumyaEWJCu1Y9a2XBMdwj83DFjFmivt").Get()), "Crazyivan3800")
	(CTxDestination(CBitcoinAddress("FRNqyBF2wVXshGg2UtA8jcggWCVHAoN1qe").Get()), "tkari")
	(CTxDestination(CBitcoinAddress("FBbsz5mFhSvQo6Ro4ZpnvQqZtzHNpJEM84").Get()), "Dexter")
	(CTxDestination(CBitcoinAddress("F9jeMU4AJ7sviq6krXWEGsfhqaKy5mzU6i").Get()), "GIminer")
	(CTxDestination(CBitcoinAddress("F6225UCtHHhUik2D8HrXGgaapiPU3n3d65").Get()), "dennislevy")
	(CTxDestination(CBitcoinAddress("FC4bWKbVT5wefKzKGN5q3eSGy1yPjvu4tm").Get()), "TimC")
	(CTxDestination(CBitcoinAddress("FF97x8GRWd7yRGqymx8M3DVvGGN7sxWxon").Get()), "Cryptonit")
	(CTxDestination(CBitcoinAddress("FEkiUvd6wKHtiWKy87Cwo1Rbx1dgqUWfF7").Get()), "bittamak")
	(CTxDestination(CBitcoinAddress("FUvpVUAnEf9u4JPmVWymhV5o1BEvMQBcyP").Get()), "SuperFLY")
	(CTxDestination(CBitcoinAddress("FRANKroMjve2cw8YoRsnujNexodisPpiL9").Get()), "c00p3r")
	(CTxDestination(CBitcoinAddress("FNUejQiTyuGpg21ibHjNaDf2soWvAVJQXY").Get()), "ASICrefugee")
	(CTxDestination(CBitcoinAddress("F7dAQcTUw41VN98HRdcZgrMfszVsWpqGtQ").Get()), "Woody20285POS")
	(CTxDestination(CBitcoinAddress("FBiW4AyYDqRtosGHY19WWeyErrqQrCnRTy").Get()), "GoldTiger69")
	(CTxDestination(CBitcoinAddress("F7BV2FgDixymA2t8dzanETGXK9v2HDHf55").Get()), "catotune")
	(CTxDestination(CBitcoinAddress("FLL6wgVn9PVQP9HnjzRxmoNF6RtKEnz6Lt").Get()), "ZeeWolf")
	(CTxDestination(CBitcoinAddress("FEuja4SwbXcBWq5MTn9UXB2ygKBNqDYoJK").Get()), "HORT")
	(CTxDestination(CBitcoinAddress("FLcAPm13ZrQPfsU7KtdZNGnhzoZR34LMJ8").Get()), "whitetrash")
	(CTxDestination(CBitcoinAddress("F7XZuq8QAUhs1c7endkDpHSqiyDNMUFkiK").Get()), "Rexxxem")
	(CTxDestination(CBitcoinAddress("FATiB27UfQyySJCyM1dEQTaxMdZgqxHZ4y").Get()), "groggin")
	(CTxDestination(CBitcoinAddress("F7CqzgLHwWqEZ97xKyNXFgvJA5QyFo5BCm").Get()), "Hashmaster1")
	(CTxDestination(CBitcoinAddress("F9d5ncToTRjmY9qTzD1m5ZwLhHuZzpqHU3").Get()), "iDunk")
	(CTxDestination(CBitcoinAddress("FSdifdoeqAwMWJeSRXrGFqXv1EM3tN3rnN").Get()), "CryptoWimp")
	(CTxDestination(CBitcoinAddress("FFYMX4E8LbuB77z649MEvebUBitQUAexxG").Get()), "TimC_POS")
	(CTxDestination(CBitcoinAddress("F7YnKgE4Ez4VjujmxCwHxYN3TfAiG7Z35d").Get()), "okane81")
	(CTxDestination(CBitcoinAddress("FBhazXHyHPYVcXbeY2sCxqGjpbPorY4RdQ").Get()), "ASICrefugeePOS")
	(CTxDestination(CBitcoinAddress("F9fNusJLCQjt4qq87xfALquEqZSTrAjBDH").Get()), "CapnBDL")
	(CTxDestination(CBitcoinAddress("FSN2pyQhEjrfkhhjeeYZjZ7dCfTQzyaupD").Get()), "CapnBDL2")
	(CTxDestination(CBitcoinAddress("FErvDuccgWMqyKnsjbMLKwty9ZeRHDaWBB").Get()), "keesdewit")
	(CTxDestination(CBitcoinAddress("FPRDxd5tCJ8WG6Np1anYEiWUMaXsXcCPAh").Get()), "xProphet");	
	
	return groupList.count(destination);
}	