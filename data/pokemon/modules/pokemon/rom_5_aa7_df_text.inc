
	@ asm/pokemon.s:14238 SetMonPreventsSwitchingString
	.globl gText_Rom_5AA7DF
gText_Rom_5AA7DF: @ 0x085AA7DF
	.string "{0xFD}{0x00}の　{0xFD}{0x17}で\n{0xFD}{0x01}を　もどすことが　できない！\p{EOS}"
	.if (. - gText_Rom_5AA7DF) > 0x1a
	.error "gText_Rom_5AA7DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7DF) < 0x1a
	.space 0x1a - (. - gText_Rom_5AA7DF)
	.endif
	@ analyzed canonical ROM range 0x085AA7F9-0x085AA80B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x19, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x00, 0x1A, 0x00
	.byte 0x07, 0x06, 0x15
