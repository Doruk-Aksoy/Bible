/*
PROBLEM STATEMENT:

  Reverse the bits of a given unsigned int. Ex: 00110 becomes 01100.
  
PARAMETERS:

  Unsigned int A
*/

unsigned int revhelper(unsigned int A, unsigned int bits) {
	unsigned int res;
	unsigned int mask = (1 << (bits >> 1)) - 1;
	
	if(bits == 1)
		return A;
	res = revhelper(A >> (bits >> 1), (bits >> 1)) | revhelper(A & mask, bits >> 1) << (bits >> 1);
	return res;
}

return revhelper(A, 32);
