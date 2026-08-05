	@ data/text/trainers.inc:1700 Route117_Text_LydiaIntro (+1 aliases)
	.globl gText_Rom_25DC27
gText_Rom_25DC27: @ 0x0825DC27
	.string "ポケモンを ちゃんと そだててるか\nわたしが たしかめて あげますね$"
	.if (. - gText_Rom_25DC27) > 0x23
	.error "gText_Rom_25DC27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DC27) < 0x23
	.space 0x23 - (. - gText_Rom_25DC27)
	.endif
