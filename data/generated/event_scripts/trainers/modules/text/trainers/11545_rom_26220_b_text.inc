	@ data/text/trainers.inc:3392 Route134_Text_KelvinIntro (+1 aliases)
	.globl gText_Rom_26220B
gText_Rom_26220B: @ 0x0826220B
	.string "ふ ふねが\nながされて しまったんです$"
	.if (. - gText_Rom_26220B) > 0x14
	.error "gText_Rom_26220B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26220B) < 0x14
	.space 0x14 - (. - gText_Rom_26220B)
	.endif
