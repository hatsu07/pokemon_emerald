	@ data/text/trainers.inc:2915 Route127_Text_JonahPostBattle
	.globl gText_Rom_260F32
gText_Rom_260F32: @ 0x08260F32
	.string "つれなくても かまいません\nずっと いとを たらしているのです……$"
	.if (. - gText_Rom_260F32) > 0x22
	.error "gText_Rom_260F32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260F32) < 0x22
	.space 0x22 - (. - gText_Rom_260F32)
	.endif
