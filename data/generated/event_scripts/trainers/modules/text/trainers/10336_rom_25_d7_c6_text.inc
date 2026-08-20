	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl gText_Rom_25D7C6
gText_Rom_25D7C6: @ 0x0825D7C6
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!{EOS}"
	.if (. - gText_Rom_25D7C6) > 0x44
	.error "gText_Rom_25D7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D7C6) < 0x44
	.space 0x44 - (. - gText_Rom_25D7C6)
	.endif
