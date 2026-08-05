	@ data/text/trainers.inc:211 Route104_Text_BillyIntro (+1 aliases)
	.globl gText_Rom_259E91
gText_Rom_259E91: @ 0x08259E91
	.string "すなはまに あしあと つけるのって\nたのしーよねー!"
	.byte EOS
	.if (. - gText_Rom_259E91) > 0x1b
	.error "gText_Rom_259E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E91) < 0x1b
	.space 0x1b - (. - gText_Rom_259E91)
	.endif
