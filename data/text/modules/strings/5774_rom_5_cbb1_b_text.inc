	@ src/strings.c:589 gText_OnlyOnePhrase
	.globl gText_OnlyOnePhrase
gText_OnlyOnePhrase: @ 0x085CBB1B
	.string "かえられる ことばは 1つ までです!{EOS}"
	.if (. - gText_OnlyOnePhrase) > 0x14
	.error "gText_OnlyOnePhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_OnlyOnePhrase) < 0x14
	.space 0x14 - (. - gText_OnlyOnePhrase)
	.endif
