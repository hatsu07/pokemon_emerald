	@ data/text/trainers.inc:1610 Route116_Text_JerryRematchIntro (+1 aliases)
	.globl gText_Rom_25D84E
gText_Rom_25D84E: @ 0x0825D84E
	.string "あれから トレーナーズ スクールで\nまじめに べんきょう したからね\lこのまえ みたいに まけたりしないよ!$"
	.if (. - gText_Rom_25D84E) > 0x37
	.error "gText_Rom_25D84E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D84E) < 0x37
	.space 0x37 - (. - gText_Rom_25D84E)
	.endif
