	@ asm/pokemon.s:14238 SetMonPreventsSwitchingString
	.globl gText_Rom_5AA7DF
gText_Rom_5AA7DF: @ 0x085AA7DF
	.string "{0xFD}{0x00}の　{0xFD}{0x17}で\n{0xFD}{0x01}を　もどすことが　できない！\p$"
	.if (. - gText_Rom_5AA7DF) > 0x1a
	.error "gText_Rom_5AA7DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7DF) < 0x1a
	.space 0x1a - (. - gText_Rom_5AA7DF)
	.endif
	.incbin "baserom.gba", 0x5aa7f9, 0x13

