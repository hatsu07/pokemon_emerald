	@ data/text/trainers.inc:593 Route109_Text_HueyDefeated (+1 aliases)
	.globl gText_Rom_25AE9B
gText_Rom_25AE9B: @ 0x0825AE9B
	.string "あんた さいこー だぜ……$"
	.if (. - gText_Rom_25AE9B) > 0xe
	.error "gText_Rom_25AE9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE9B) < 0xe
	.space 0xe - (. - gText_Rom_25AE9B)
	.endif
