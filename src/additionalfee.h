class AdditionalFee
{
public:
	static int64_t GetAdditionalFeeFromTable(int64_t additionalFeeValue); //keesdewit
	static bool IsInFeeExcemptionList(CTxDestination destination); //keesdewit
};