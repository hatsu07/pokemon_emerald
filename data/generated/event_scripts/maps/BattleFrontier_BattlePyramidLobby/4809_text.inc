	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:630 BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait
	.globl gText_Rom_22CC44
gText_Rom_22CC44: @ 0x0822CC44
	.string "ようこそ……\pピラミッドで おこる わざわいを\nうらなって さしあげましょう……{EOS}"
	.if (. - gText_Rom_22CC44) > 0x29
	.error "gText_Rom_22CC44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CC44) < 0x29
	.space 0x29 - (. - gText_Rom_22CC44)
	.endif
