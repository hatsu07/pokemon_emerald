	@ data/text/trainers.inc:2876 Route126_Text_IsobelDefeat (+1 aliases)
	.globl gText_Rom_260DED
gText_Rom_260DED: @ 0x08260DED
	.string "ああっ!\nく くやし……ごほッ!$"
	.if (. - gText_Rom_260DED) > 0x11
	.error "gText_Rom_260DED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260DED) < 0x11
	.space 0x11 - (. - gText_Rom_260DED)
	.endif
