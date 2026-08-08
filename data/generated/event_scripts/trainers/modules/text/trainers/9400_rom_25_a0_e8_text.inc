	@ data/text/trainers.inc:260 Route104_Text_WinstonRematchIntro (+1 aliases)
	.globl gText_Rom_25A0E8
gText_Rom_25A0E8: @ 0x0825A0E8
	.string "きみに まけてから いろいろ\nポケモンのこと べんきょう したんだ!$"
	.if (. - gText_Rom_25A0E8) > 0x23
	.error "gText_Rom_25A0E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A0E8) < 0x23
	.space 0x23 - (. - gText_Rom_25A0E8)
	.endif
