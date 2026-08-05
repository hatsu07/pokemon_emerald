	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5AD9C0
gText_Rom_5AD9C0: @ 0x085AD9C0
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5AD9C0) > 0x14
	.error "gText_Rom_5AD9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9C0) < 0x14
	.space 0x14 - (. - gText_Rom_5AD9C0)
	.endif
