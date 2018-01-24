#define _CRT_SECURE_NO_WARNINGS

#include "libgen.h"

const char* dirname(char* _path)
{
	char* _pathFather = _path;
	char* _Assisit = _path;


	if (_path == nullptr)
	{
		const char* ret = nullptr;
		return ret;
	}

	_Assisit = strchr(_Assisit, '/');
	if (_Assisit == nullptr)
	{
		const char* ret = ".";
		return ret;
	}

	for (int count = 0;;)
	{
		count = _Assisit - _pathFather;
		_Assisit = strchr(_Assisit, '/');

		if (_Assisit == nullptr)
		{
			char* _tmp = (char*)malloc(sizeof(char)*count);
			//≥ı ºªØ_tmp£¨∑¿÷π¬“¬Î
			memset(_tmp, 0, sizeof(char)*count);
			strncpy(_tmp, _pathFather, count - 1);
			_tmp[count-1] = '\0';
			const char* ret = _tmp;

			return ret;
		}
		_Assisit++;
	}
}