	@ src/strings.c:1000 gText_TheseThreePkmnOkay
	.globl gText_TheseThreePkmnOkay
gText_TheseThreePkmnOkay: @ 0x085DBBF6
	.string "いじょうの 3ひきで よろしいですか?{EOS}"
	.if (. - gText_TheseThreePkmnOkay) > 0x14
	.error "gText_TheseThreePkmnOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_TheseThreePkmnOkay) < 0x14
	.space 0x14 - (. - gText_TheseThreePkmnOkay)
	.endif
