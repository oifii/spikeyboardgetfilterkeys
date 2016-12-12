// spikeyboardgetfilterkeys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	FILTERKEYS keys = { sizeof(FILTERKEYS) };
	keys.cbSize = sizeof(FILTERKEYS);

    if (!SystemParametersInfo (SPI_GETFILTERKEYS, 0, (LPVOID) &keys, 0))
    {
        printf("System call failed. Unable to get FILTERKEYS.\n");
    }
	else
	{
        printf("System call success. FILTERKEYS dwFlags =%ld\n", keys.dwFlags);
        printf("System call success. FILTERKEYS iBounceMSec =%ld\n", keys.iBounceMSec);
        printf("System call success. FILTERKEYS iDelayMSec =%ld\n", keys.iDelayMSec);
        printf("System call success. FILTERKEYS iRepeatMSec =%ld\n", keys.iRepeatMSec);
        printf("System call success. FILTERKEYS iWaitMSec =%ld\n", keys.iWaitMSec);

		printf("\nFILTERKEYS dwFlags is:\n\n");

		printf("FKF_AVAILABLE is ");
		if((FKF_AVAILABLE & keys.dwFlags) == FKF_AVAILABLE)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_CLICKON is ");
		if((FKF_CLICKON & keys.dwFlags) == FKF_CLICKON)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_CONFIRMHOTKEY is ");
		if((FKF_CONFIRMHOTKEY & keys.dwFlags) == FKF_CONFIRMHOTKEY)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_FILTERKEYSON is ");
		if((FKF_FILTERKEYSON & keys.dwFlags) == FKF_FILTERKEYSON)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_HOTKEYACTIVE is ");
		if((FKF_HOTKEYACTIVE & keys.dwFlags) == FKF_HOTKEYACTIVE)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_HOTKEYSOUND is ");
		if((FKF_HOTKEYSOUND & keys.dwFlags) == FKF_HOTKEYSOUND)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}

		printf("FKF_INDICATOR is ");
		if((FKF_INDICATOR & keys.dwFlags) == FKF_INDICATOR)
		{
			printf("enabled\n");
		}
		else
		{
			printf("disabled\n");
		}
	}
	return 0;
}

