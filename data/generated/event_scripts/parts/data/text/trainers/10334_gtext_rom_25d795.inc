	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl gText_Rom_25D795
gText_Rom_25D795: @ 0x0825D795
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ$"
	.if (. - gText_Rom_25D795) > 0x31
	.error "gText_Rom_25D795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D795) < 0x31
	.space 0x31 - (. - gText_Rom_25D795)
	.endif
