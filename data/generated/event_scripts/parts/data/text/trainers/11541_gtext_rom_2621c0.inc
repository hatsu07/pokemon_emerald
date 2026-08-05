	@ data/text/trainers.inc:3386 Route134_Text_AaronDefeat (+1 aliases)
	.globl gText_Rom_2621C0
gText_Rom_2621C0: @ 0x082621C0
	.string "すなおに まけを みとめよう$"
	.if (. - gText_Rom_2621C0) > 0xf
	.error "gText_Rom_2621C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2621C0) < 0xf
	.space 0xf - (. - gText_Rom_2621C0)
	.endif
