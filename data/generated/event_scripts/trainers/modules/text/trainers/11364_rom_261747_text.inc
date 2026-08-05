	@ data/text/trainers.inc:3125 Route130_Text_SantiagoIntro (+1 aliases)
	.globl gText_Rom_261747
gText_Rom_261747: @ 0x08261747
	.string "なにも ない うみに うかんでると……\nへいわだなあー……$"
	.if (. - gText_Rom_261747) > 0x1e
	.error "gText_Rom_261747 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261747) < 0x1e
	.space 0x1e - (. - gText_Rom_261747)
	.endif
