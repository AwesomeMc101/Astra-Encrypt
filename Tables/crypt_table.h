#pragma once
typedef enum {
	CRYPT_ADD, // FULL+
	CRYPT_SUB,
	CRYPT_MUL,
	CRYPT_DIV,
	CRYPT_REVERSE,
	//CRYPT_SWAP, //AB -> BA
	CRYPT_SQRT,
	CRYPT_CBRT,

	/* distinct definitions found in classes.hpp */
	CRYPT_EULER,
	CRYPT_PI,
	CRYPT_TAU, //occurs on the decimal spot. lol
	CRYPT_OMEGA,

} Crypt_Table;

