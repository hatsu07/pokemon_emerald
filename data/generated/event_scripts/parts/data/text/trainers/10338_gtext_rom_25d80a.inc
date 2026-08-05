	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D80A
gText_Rom_25D80A: @ 0x0825D80A
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!$"
	.if (. - gText_Rom_25D80A) > 0x44
	.error "gText_Rom_25D80A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D80A) < 0x44
	.space 0x44 - (. - gText_Rom_25D80A)
	.endif
