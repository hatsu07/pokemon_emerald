	@ src/strings.c:1000 gText_TheseThreePkmnOkay
	.globl gText_Rom_5DBBF6
gText_Rom_5DBBF6: @ 0x085DBBF6
	.string "いじょうの 3ひきで よろしいですか?{EOS}"
	.if (. - gText_Rom_5DBBF6) > 0x14
	.error "gText_Rom_5DBBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBF6) < 0x14
	.space 0x14 - (. - gText_Rom_5DBBF6)
	.endif
