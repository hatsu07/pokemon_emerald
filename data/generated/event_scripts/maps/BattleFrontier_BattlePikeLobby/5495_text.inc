	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:422 BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules
	.globl gText_Rom_233B6D
gText_Rom_233B6D: @ 0x08233B6D
	.string "バトルゲームの あいだは\nバッグと ポケナビの しようは\lきんし されています"
	.byte EOS
	.if (. - gText_Rom_233B6D) > 0x28
	.error "gText_Rom_233B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B6D) < 0x28
	.space 0x28 - (. - gText_Rom_233B6D)
	.endif
