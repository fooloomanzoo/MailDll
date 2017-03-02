#ifndef BASE_64_H_INCLUDED
#define BASE_64_H_INCLUDED

int B64Enc(char** pB64Str, const unsigned char* rgEncBuf, int ncEncBuf);
/*Wandelt Byte-Stream rgEncBuf der Gr��e ncEncBuf-Bytes in nullterminierten
Base64-codierte US-ASCII String *pB64Str um, f�r den der ben�tigte Speicher angelegt wird.
Funktion gibt die L�nge des codierten Strings zur�ck, -2 bei fehlerhaften Parametern,
-1 bei unzur�ckendem Speicher*/
/*erfordert manuelle Speicherfreigabe mittels free*/

int B64Dec(unsigned char** pByteStream, const char* szDecBuf);
/*Wandelt Base64-codierten, nullterminierten US-ASCII String in
urspr�nglichen Byte-Stream *pByteStream um, f�r den der ben�tigte Speicher angelegt wird.
Es wird zus�tzlich ein Null-Byte angeh�ngt aus Kompatibilit�t zu C-Strings.
Funktion gibt die L�nge der decodierten Byte-Stream zur�ck, -3 bei fehlerhaften Parametern,
-2 bei unzureichendem Speicher, -1 bei ung�ltigem Base64-codierten Stream*/
/*erfordert manuelle Speicherfreigabe mittels free*/

#endif
