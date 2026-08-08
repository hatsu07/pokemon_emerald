	@ data/maps/Route119/scripts.inc:510 Route119_Text_BrendanIntro
	.globl gText_Rom_1ED441
gText_Rom_1ED441: @ 0x081ED441
	.string "ユウキ『{PLAYER}!\nここで ポケモン さがしてたのか?\pどれくらい つよく なったか\nためして やるよ\pさあ!\nしょうぶ しょうぶ だぜ!$"
	.if (. - gText_Rom_1ED441) > 0x44
	.error "gText_Rom_1ED441 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED441) < 0x44
	.space 0x44 - (. - gText_Rom_1ED441)
	.endif
