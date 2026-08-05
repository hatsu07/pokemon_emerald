	@ data/maps/Route119/scripts.inc:478 Route119_Text_MayIntro
	.globl gText_Rom_1ED2BE
gText_Rom_1ED2BE: @ 0x081ED2BE
	.string "ハルカ『{PLAYER}{KUN}!\nどこに いたのよ? さがしたわ!\pどれくらい つよく なったのか\nちょっと ためして あげる!\pポケモンの じゅんびは……\nいいに きまってるよね! それっ!$"
	.if (. - gText_Rom_1ED2BE) > 0x5a
	.error "gText_Rom_1ED2BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED2BE) < 0x5a
	.space 0x5a - (. - gText_Rom_1ED2BE)
	.endif
