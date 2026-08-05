	@ src/data/credits.h:102 sCreditsText_LeadProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E46
gText_Rom_5C6E46: @ 0x085C6E46
	.string "プログラム リーダー$"
	.if (. - gText_Rom_5C6E46) != 0xb
	.error "gText_Rom_5C6E46 must retain its original byte length"
	.endif
