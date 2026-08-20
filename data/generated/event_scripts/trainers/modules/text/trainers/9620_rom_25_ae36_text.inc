	@ data/text/trainers.inc:581 Route109_Text_AliceIntro (+1 aliases)
	.globl gText_Rom_25AE36
gText_Rom_25AE36: @ 0x0825AE36
	.string "ひやけ たいさく\nあなたは してる?{EOS}"
	.if (. - gText_Rom_25AE36) > 0x13
	.error "gText_Rom_25AE36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE36) < 0x13
	.space 0x13 - (. - gText_Rom_25AE36)
	.endif
