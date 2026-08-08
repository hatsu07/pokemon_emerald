	@ data/text/trainers.inc:3338 Route133_Text_ConorIntro (+1 aliases)
	.globl gText_Rom_262022
gText_Rom_262022: @ 0x08262022
	.string "わかい やつらは\nながされて ばっかりで なさけねぇ!$"
	.if (. - gText_Rom_262022) > 0x1c
	.error "gText_Rom_262022 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262022) < 0x1c
	.space 0x1c - (. - gText_Rom_262022)
	.endif
