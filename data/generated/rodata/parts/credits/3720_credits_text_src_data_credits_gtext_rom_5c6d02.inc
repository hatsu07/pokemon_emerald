	@ src/data/credits.h:73 sCreditsText_BattleSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D02
gText_Rom_5C6D02: @ 0x085C6D02
	.string "バトル システム プログラム$"
	.if (. - gText_Rom_5C6D02) != 0xf
	.error "gText_Rom_5C6D02 must retain its original byte length"
	.endif
