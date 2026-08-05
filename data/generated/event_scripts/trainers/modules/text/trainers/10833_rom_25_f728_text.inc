	@ data/text/trainers.inc:2333 Route121_Text_JessicaRematchDefeat (+1 aliases)
	.globl gText_Rom_25F728
gText_Rom_25F728: @ 0x0825F728
	.string "ぷんぷん!\nまた てかげん してくれないのね!$"
	.if (. - gText_Rom_25F728) > 0x18
	.error "gText_Rom_25F728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F728) < 0x18
	.space 0x18 - (. - gText_Rom_25F728)
	.endif
