	@ data/text/trainers.inc:3350 Route134_Text_JackDefeat (+1 aliases)
	.globl gText_Rom_26208B
gText_Rom_26208B: @ 0x0826208B
	.string "ひえーっ!$"
	.if (. - gText_Rom_26208B) > 0x6
	.error "gText_Rom_26208B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26208B) < 0x6
	.space 0x6 - (. - gText_Rom_26208B)
	.endif
