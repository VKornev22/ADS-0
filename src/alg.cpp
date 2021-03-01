// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    return gcd(b, a % b);
    while ((b != 0) && (a != 0)) {
	        if (a > b)
		       a = a - b;
		else
		       b = b - a;
	}
	return (a+b);
}
