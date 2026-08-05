	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:823 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons
	.globl gText_Rom_23519F
gText_Rom_23519F: @ 0x0823519F
	.string "ようこそ いらっしゃい ました……\pうふふ……\nほんとうに ラッキーな おかた……\pさいごに このへやを えらばれた\nおきゃくさまは ポケモンを すべて\lかいふくして さしあげましょう……"
	.byte EOS
	.if (. - gText_Rom_23519F) > 0x5f
	.error "gText_Rom_23519F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23519F) < 0x5f
	.space 0x5f - (. - gText_Rom_23519F)
	.endif
