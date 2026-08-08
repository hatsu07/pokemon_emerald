	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:391 BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal
	.globl gText_Rom_233A64
gText_Rom_233A64: @ 0x08233A64
	.string "んんー! ちくしょー!!\nあと 1へやで ゴールだったのによー!\pおまえ! ここでは どくや こおりには\nちゅうい したほうが いいぞ!"
	.byte EOS
	.if (. - gText_Rom_233A64) > 0x45
	.error "gText_Rom_233A64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233A64) < 0x45
	.space 0x45 - (. - gText_Rom_233A64)
	.endif
