	@ data/text/trainers.inc:3266 Route132_Text_PaxtonIntro (+1 aliases)
	.globl gText_Rom_261D4F
gText_Rom_261D4F: @ 0x08261D4F
	.string "いつも いっしょの ばあさんは どこかな?\nひとりで かてるじゃろか{EOS}"
	.if (. - gText_Rom_261D4F) > 0x23
	.error "gText_Rom_261D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D4F) < 0x23
	.space 0x23 - (. - gText_Rom_261D4F)
	.endif
