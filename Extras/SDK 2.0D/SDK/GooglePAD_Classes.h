#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GooglePAD.GooglePADFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		GooglePAD_EGooglePADErrorCode ShowCellularDataConfirmation();
		GooglePAD_EGooglePADErrorCode RequestRemoval(const class FString& Name);
		GooglePAD_EGooglePADErrorCode RequestInfo(TArray<class FString> AssetPacks);
		GooglePAD_EGooglePADErrorCode RequestDownload(TArray<class FString> AssetPacks);
		void ReleaseDownloadState(int32_t State);
		void ReleaseAssetPackLocation(int32_t Location);
		int32_t GetTotalBytesToDownload(int32_t State);
		GooglePAD_EGooglePADStorageMethod GetStorageMethod(int32_t Location);
		GooglePAD_EGooglePADErrorCode GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status);
		GooglePAD_EGooglePADDownloadStatus GetDownloadStatus(int32_t State);
		GooglePAD_EGooglePADErrorCode GetDownloadState(const class FString& Name, int32_t* State);
		int32_t GetBytesDownloaded(int32_t State);
		class FString GetAssetsPath(int32_t Location);
		GooglePAD_EGooglePADErrorCode GetAssetPackLocation(const class FString& Name, int32_t* Location);
		GooglePAD_EGooglePADErrorCode CancelDownload(TArray<class FString> AssetPacks);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
