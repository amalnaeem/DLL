#pragma once
#pragma once
#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  

namespace MathLibrary
{
	// This class is exported from the MathLibrary.dll  

	// Returns a + b  
	MATHLIBRARY_API void Add(int a[3][3], int b[3][3]);
	MATHLIBRARY_API void sub(int a[3][3], int b[3][3]);
	MATHLIBRARY_API void multiply(int a[3][3], int b[3][3]);


}

