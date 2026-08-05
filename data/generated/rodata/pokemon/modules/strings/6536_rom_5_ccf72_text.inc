	@ src/strings.c:866 gJPText_LinkIsIncorrect
	.globl gText_Rom_5CCF72
gText_Rom_5CCF72: @ 0x085CCF72
	.string "せつぞくが まちがっています$"
	.if (. - gText_Rom_5CCF72) > 0xf
	.error "gText_Rom_5CCF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF72) < 0xf
	.space 0xf - (. - gText_Rom_5CCF72)
	.endif
