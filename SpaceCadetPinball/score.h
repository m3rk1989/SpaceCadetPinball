#pragma once

struct  scoreStruct
{
	int Unknown1;
	int Unknown2;
	int RenderBgBmp;
	int Short1;
	int Short2;
	int Short3;
	int Short4;
	char* Bitmap8Bit1;
	char* Bitmap8Bit2;
	char* Bitmap8Bit3;
	char* Bitmap8Bit4;
	char* Bitmap8Bit5;
	char* Bitmap8Bit6;
	char* Bitmap8Bit7;
	char* Bitmap8Bit8;
	char* Bitmap8Bit9;
	char* Bitmap8Bit10;
};

class score
{
public:
	static scoreStruct* create(LPCSTR fieldName, int renderBgBmp);
	static scoreStruct* dup(scoreStruct* score, int scoreIndex);
};

