/*
Coder	: Tokivena -- Elie Louis
Contact : elie_louis@hotmail.com
To do	: Add FtpGetFileSize and FtpCommand
*/

#include <Windows.h>
#include <WinInet.h>
#include <iostream>
#pragma comment (lib, "wininet.lib")

class FTP
{
	public:
		FTP();
		~FTP();
		bool connect(LPCWSTR lpszServerName, LPCWSTR lpszUser, LPCWSTR lpszPassword);
		bool upload(LPCWSTR lpszLocation, LPCWSTR lpszRemFile);
		bool download(LPCWSTR lpszRemName, LPCWSTR lpszLocation);
		bool mkdir(LPCWSTR lpszDirectory);
		bool cd(LPCWSTR lpszDirectory);
		bool remove(LPCWSTR lpszFileName);
		bool rename(LPCWSTR lpszOldFileName, LPCWSTR lpszNewFileName);
		bool rmdir(LPCWSTR lpszDirectory);
		int getfilesize(LPCWSTR lpszFileName);
		HINTERNET gethandle();
		std::string getcd();


	private:
		bool m_connected;
		HINTERNET m_hInternet;
		HINTERNET m_hFtpSession;
};


/*int main()
{

	HINTERNET hInternet;
	HINTERNET hFtpSession;
	hInternet = InternetOpen(NULL,INTERNET_OPEN_TYPE_DIRECT,NULL,NULL,0);

	if (hInternet == NULL) printf ("No internet connection");
	else  printf ("Internet connection ESTABLISHED\n");

	hFtpSession = InternetConnect(hInternet,L"ftp.drivehq.com",INTERNET_DEFAULT_FTP_PORT, L"tokivena3",L"123w456", INTERNET_SERVICE_FTP, 0,0 );

	if ( !hFtpSession ) printf("Error in the ftp connection\n");
	else
	{
		printf("FTP connection ESTABLISHED\n");
		if ( !FtpPutFile(hFtpSession, L"C:\\hello.txt", L"hah2a.txt", FTP_TRANSFER_TYPE_BINARY, 0) ) printf ("File transfer fails");
	   else  printf("The file was transferred\n");

		

	}
	getchar();

}

*/