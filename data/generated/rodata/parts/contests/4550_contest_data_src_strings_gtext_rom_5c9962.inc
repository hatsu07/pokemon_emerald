	@ src/strings.c:229 gText_HereYouGoThankYou
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9962
gText_Rom_5C9962: @ 0x085C9962
	.string "はい まいど!\nありがとう ございます$"
	.if (. - gText_Rom_5C9962) != 0x14
	.error "gText_Rom_5C9962 must retain its original byte length"
	.endif
