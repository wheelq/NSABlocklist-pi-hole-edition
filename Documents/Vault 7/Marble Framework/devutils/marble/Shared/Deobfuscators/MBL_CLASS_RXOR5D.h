#pragma once

class MBL_CLASS_RXOR5D
{
public:

	MBL_CLASS_RXOR5D(void);
	~MBL_CLASS_RXOR5D(void);

	void Scramble(char *cString, char cXorKey, int iNumOfChars);
	void Scramble(wchar_t *wcString, wchar_t wcXorKey, int iNumOfChars);

protected:
	char *cStringPointer;
	int iCStringPointerLen;
	wchar_t *wcStringPointer;
	int iWStringPointerLen;

};
