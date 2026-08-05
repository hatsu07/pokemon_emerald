	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5ADA87
gText_Rom_5ADA87: @ 0x085ADA87
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5ADA87) > 0x14
	.error "gText_Rom_5ADA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA87) < 0x14
	.space 0x14 - (. - gText_Rom_5ADA87)
	.endif
	@ Decoded text from ROM range: offset=0x5ADA9B, size=0x14
	.string "{STR_VAR_1}は　{STR_VAR_2}を　おぼえずに　おわった！$"
