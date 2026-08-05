	@ data/maps/OldaleTown/scripts.inc:381 OldaleTown_Text_MayLetsGoBack
	.globl gText_Rom_1E4BF3
gText_Rom_1E4BF3: @ 0x081E4BF3
	.string "ハルカ『{PLAYER}{KUN}!\nこっち こっち!\lはやく かえろうよ!$"
	.if (. - gText_Rom_1E4BF3) > 0x1e
	.error "gText_Rom_1E4BF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4BF3) < 0x1e
	.space 0x1e - (. - gText_Rom_1E4BF3)
	.endif
