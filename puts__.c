void puts__(char *string){
	char *temp=string;
	while(*temp!='\0'){
		asm(
				"movq $1,%%rax\n\t"
				"movq $1,%%rdi\n\t"
				"movq %0,%%rsi\n\t"
				"movq $1,%%rdx\n\t"
				"syscall"
				:
				:"m"(temp)
				:"%rax","%rdi","%rsi","%rdx"
		   );
		temp++;
	}
	char* n="\n";
	asm(
			"movq $1,%%rax\n\t"
			"movq $1,%%rdi\n\t"
			"movq %0,%%rsi\n\t"
			"movq $1,%%rdx\n\t"
			"syscall"
			:
			:"m"(n)
			:"%rax","rdi","%rsi","%rdx"
	   );
}
