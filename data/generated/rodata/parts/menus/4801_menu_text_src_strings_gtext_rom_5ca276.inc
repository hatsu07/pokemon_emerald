	@ src/strings.c:357 gJPText_AreYouSureYouWantToSpinTradeMon
	.globl gText_Rom_5CA276
gText_Rom_5CA276: @ 0x085CA276
	.string "{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか?$"
	.if (. - gText_Rom_5CA276) > 0x1b
	.error "gText_Rom_5CA276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA276) < 0x1b
	.space 0x1b - (. - gText_Rom_5CA276)
	.endif
	.space 0x3, 0x00
