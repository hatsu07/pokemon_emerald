	@ src/strings.c:551 gText_ChangeJustOneWordOrPhrase
	.globl gText_Rom_5CB8F3
gText_Rom_5CB8F3: @ 0x085CB8F3
	.string "ことばを 1つだけ いれかえて$"
	.if (. - gText_Rom_5CB8F3) > 0x10
	.error "gText_Rom_5CB8F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8F3) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8F3)
	.endif
