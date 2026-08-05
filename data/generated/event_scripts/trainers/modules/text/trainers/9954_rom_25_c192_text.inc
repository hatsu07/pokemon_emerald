	@ data/text/trainers.inc:1055 Route111_Text_TyronIntro (+1 aliases)
	.globl gText_Rom_25C192
gText_Rom_25C192: @ 0x0825C192
	.string "ぼくは こんな ポケモンが すきなんだ!$"
	.if (. - gText_Rom_25C192) > 0x15
	.error "gText_Rom_25C192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C192) < 0x15
	.space 0x15 - (. - gText_Rom_25C192)
	.endif
