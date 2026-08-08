	@ data/text/trainers.inc:2246 Route120_Text_LeonelIntro (+1 aliases)
	.globl gText_Rom_25F38C
gText_Rom_25F38C: @ 0x0825F38C
	.string "きみの てもち ポケモン\nいろんな タイプが そろって いるか?$"
	.if (. - gText_Rom_25F38C) > 0x21
	.error "gText_Rom_25F38C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F38C) < 0x21
	.space 0x21 - (. - gText_Rom_25F38C)
	.endif
