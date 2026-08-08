	@ data/text/trainers.inc:3221 Route132_Text_DanaIntro (+1 aliases)
	.globl gText_Rom_261BA4
gText_Rom_261BA4: @ 0x08261BA4
	.string "ながれの つよい ところでは\nおよがないように しているのよ$"
	.if (. - gText_Rom_261BA4) > 0x1f
	.error "gText_Rom_261BA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261BA4) < 0x1f
	.space 0x1f - (. - gText_Rom_261BA4)
	.endif
