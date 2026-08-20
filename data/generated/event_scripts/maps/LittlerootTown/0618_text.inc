	@ data/maps/LittlerootTown/scripts.inc:980 LittlerootTown_Text_CanYouGoSeeWhatsHappening
	.globl gText_Rom_1E460A
gText_Rom_1E460A: @ 0x081E460A
	.string "ねえ ねえ!\pいま まちの そとから\nこわーい ポケモンの こえが きこえたよ!\pなにが おこってるのか みにいきたいけど\nわたし ポケモン もってないし……\p{STR_VAR_1}\nわたしの かわりに みてきて くれる?{EOS}"
	.if (. - gText_Rom_1E460A) > 0x67
	.error "gText_Rom_1E460A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E460A) < 0x67
	.space 0x67 - (. - gText_Rom_1E460A)
	.endif
