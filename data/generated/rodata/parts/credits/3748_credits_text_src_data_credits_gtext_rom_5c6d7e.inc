	@ src/data/credits.h:84 sCreditsText_ScriptDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D7E
gText_Rom_5C6D7E: @ 0x085C6D7E
	.string "スクリプト せってい$"
	.if (. - gText_Rom_5C6D7E) != 0xb
	.error "gText_Rom_5C6D7E must retain its original byte length"
	.endif
