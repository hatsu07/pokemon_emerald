	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:276 PlayersHouse_2F_Text_HowDoYouLikeYourRoom
	.globl gText_Rom_1F023B
gText_Rom_1F023B: @ 0x081F023B
	.string "ママ『{PLAYER}\nどう あたらしい へやは?\pうん! きれいに かたづいてるわね!\nしたも もう かたづいたわ\lポケモンが いると ほんとうに らくね!\pそうだ! つくえの うえの ものも\nだいじょうぶか みておいてね$"
	.if (. - gText_Rom_1F023B) > 0x6b
	.error "gText_Rom_1F023B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F023B) < 0x6b
	.space 0x6b - (. - gText_Rom_1F023B)
	.endif
