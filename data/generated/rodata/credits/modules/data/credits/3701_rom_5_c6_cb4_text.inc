	@ src/data/credits.h:66 sCreditsText_PkmnEmeraldVersion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CB4
gText_Rom_5C6CB4: @ 0x085C6CB4
	.string "ポケットモンスター エメラルド$"
	.if (. - gText_Rom_5C6CB4) != 0x10
	.error "gText_Rom_5C6CB4 must retain its original byte length"
	.endif
