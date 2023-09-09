int countDigits(int n){
	int temp = n;
	int count = 0;
	while(n!=0){
		int r = n%10;
		n /= 10;
		if (r != 0 && temp%r==0) count++;
	}
	return count;
}