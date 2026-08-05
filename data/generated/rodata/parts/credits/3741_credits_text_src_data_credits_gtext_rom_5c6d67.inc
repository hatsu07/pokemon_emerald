	@ src/data/credits.h:81 sCreditsText_GameDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D67
gText_Rom_5C6D67: @ 0x085C6D67
	.string "ゲーム デザイン$"
	.if (. - gText_Rom_5C6D67) != 0x9
	.error "gText_Rom_5C6D67 must retain its original byte length"
	.endif
