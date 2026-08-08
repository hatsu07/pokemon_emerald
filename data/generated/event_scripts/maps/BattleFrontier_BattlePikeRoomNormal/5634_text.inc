	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:812 BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne
	.globl gText_Rom_23510F
gText_Rom_23510F: @ 0x0823510F
	.string "ようこそ いらっしゃい ました……\pさいごに このへやを えらばれた\nおきゃくさまは ポケモンを 1ひきだけ\lかいふくして さしあげましょう……"
	.byte EOS
	.if (. - gText_Rom_23510F) > 0x49
	.error "gText_Rom_23510F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23510F) < 0x49
	.space 0x49 - (. - gText_Rom_23510F)
	.endif
