	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:340 BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_233896
gText_Rom_233896: @ 0x08233896
	.string "バトルゲームを かいしする まえに\nレポートを かきます…… よろしいですか?"
	.byte EOS
	.if (. - gText_Rom_233896) > 0x28
	.error "gText_Rom_233896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233896) < 0x28
	.space 0x28 - (. - gText_Rom_233896)
	.endif
