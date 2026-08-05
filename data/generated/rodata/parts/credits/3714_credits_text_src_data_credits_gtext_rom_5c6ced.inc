	@ src/data/credits.h:71 sCreditsText_BattleDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CED
gText_Rom_5C6CED: @ 0x085C6CED
	.string "バトル ディレクター$"
	.if (. - gText_Rom_5C6CED) != 0xb
	.error "gText_Rom_5C6CED must retain its original byte length"
	.endif
