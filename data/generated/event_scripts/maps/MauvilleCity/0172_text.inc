	@ data/maps/MauvilleCity/scripts.inc:500 MauvilleCity_Text_UncleCanYouBattleWally
	.globl gText_Rom_1DDFD3
gText_Rom_1DDFD3: @ 0x081DDFD3
	.string "おじさん『{PLAYER}{KUN}とやら\nわるいけど ミツルくんと\lしょうぶ してあげて くれないかな?\pこのままだと なにを いっても\nきいて もらえそうに ないよ{EOS}"
	.if (. - gText_Rom_1DDFD3) > 0x4c
	.error "gText_Rom_1DDFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDFD3) < 0x4c
	.space 0x4c - (. - gText_Rom_1DDFD3)
	.endif
