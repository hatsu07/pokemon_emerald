	@ data/text/trainers.inc:2900 Route127_Text_DonnyIntro (+1 aliases)
	.globl gText_Rom_260E9B
gText_Rom_260E9B: @ 0x08260E9B
	.string "あいつには まけたくない って\nライバル きみには いるの?$"
	.if (. - gText_Rom_260E9B) > 0x1f
	.error "gText_Rom_260E9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E9B) < 0x1f
	.space 0x1f - (. - gText_Rom_260E9B)
	.endif
