	@ data/text/trainers.inc:3401 Route134_Text_MarleyIntro (+1 aliases)
	.globl gText_Rom_262281
gText_Rom_262281: @ 0x08262281
	.string "すばやい こうげきを かわせますこと?{EOS}"
	.if (. - gText_Rom_262281) > 0x14
	.error "gText_Rom_262281 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262281) < 0x14
	.space 0x14 - (. - gText_Rom_262281)
	.endif
