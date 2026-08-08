	@ data/text/trainers.inc:2975 Route128_Text_IsaiahIntro (+1 aliases)
	.globl gText_Rom_261197
gText_Rom_261197: @ 0x08261197
	.string "サイユウシティは まだ とおい……$"
	.if (. - gText_Rom_261197) > 0x12
	.error "gText_Rom_261197 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261197) < 0x12
	.space 0x12 - (. - gText_Rom_261197)
	.endif
