	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D89A
gText_Rom_25D89A: @ 0x0825D89A
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ$"
	.if (. - gText_Rom_25D89A) > 0x31
	.error "gText_Rom_25D89A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D89A) < 0x31
	.space 0x31 - (. - gText_Rom_25D89A)
	.endif
