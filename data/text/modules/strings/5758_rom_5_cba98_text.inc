	@ src/strings.c:581 gText_LetsReplyToTheInterview
	.globl gText_Rom_5CBA98
gText_Rom_5CBA98: @ 0x085CBA98
	.string "インタビューに こたえよう！{EOS}"
	.if (. - gText_Rom_5CBA98) > 0xf
	.error "gText_Rom_5CBA98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA98) < 0xf
	.space 0xf - (. - gText_Rom_5CBA98)
	.endif
