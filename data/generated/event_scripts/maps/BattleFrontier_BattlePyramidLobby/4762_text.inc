	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:556 BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge
	.globl gText_Rom_22C83E
gText_Rom_22C83E: @ 0x0822C83E
	.string "バトルピラミッドへ はいる まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - gText_Rom_22C83E) > 0x28
	.error "gText_Rom_22C83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C83E) < 0x28
	.space 0x28 - (. - gText_Rom_22C83E)
	.endif
