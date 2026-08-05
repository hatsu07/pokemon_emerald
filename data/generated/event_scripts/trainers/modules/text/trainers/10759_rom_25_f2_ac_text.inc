	@ data/text/trainers.inc:2222 Route120_Text_KeigoDefeat (+1 aliases)
	.globl gText_Rom_25F2AC
gText_Rom_25F2AC: @ 0x0825F2AC
	.string "あたらしい にんぽう\nかんせいまで まだまだ かかりそうだ$"
	.if (. - gText_Rom_25F2AC) > 0x1e
	.error "gText_Rom_25F2AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F2AC) < 0x1e
	.space 0x1e - (. - gText_Rom_25F2AC)
	.endif
