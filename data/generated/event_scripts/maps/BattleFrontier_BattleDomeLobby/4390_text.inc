	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:478 BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
	.globl gText_Rom_22764D
gText_Rom_22764D: @ 0x0822764D
	.string "トーナメントには\nレベル50と オープンレベルと ありますが\lどちらに ちょうせん しますか?$"
	.if (. - gText_Rom_22764D) > 0x30
	.error "gText_Rom_22764D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22764D) < 0x30
	.space 0x30 - (. - gText_Rom_22764D)
	.endif
