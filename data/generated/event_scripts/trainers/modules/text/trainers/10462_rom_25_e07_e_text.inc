	@ data/text/trainers.inc:1790 Route117_Text_MegDefeat (+1 aliases)
	.globl gText_Rom_25E07E
gText_Rom_25E07E: @ 0x0825E07E
	.string "リコ『やーん\nセンパイ ごめんなさい!{EOS}"
	.if (. - gText_Rom_25E07E) > 0x14
	.error "gText_Rom_25E07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E07E) < 0x14
	.space 0x14 - (. - gText_Rom_25E07E)
	.endif
