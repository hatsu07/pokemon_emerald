	@ data/text/trainers.inc:2159 Route120_Text_JennaPostBattle
	.globl gText_Rom_25EFB0
gText_Rom_25EFB0: @ 0x0825EFB0
	.string "たいりょく づくりが わたしの にっか\nまいにち ポケモンと ランニングよ!$"
	.if (. - gText_Rom_25EFB0) > 0x27
	.error "gText_Rom_25EFB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EFB0) < 0x27
	.space 0x27 - (. - gText_Rom_25EFB0)
	.endif
