	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:817 BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo
	.globl gText_Rom_235158
gText_Rom_235158: @ 0x08235158
	.string "ようこそ いらっしゃい ました……\pさいごに このへやを えらばれた\nおきゃくさまは ポケモンを 2ひき\lかいふくして さしあげましょう……"
	.byte EOS
	.if (. - gText_Rom_235158) > 0x47
	.error "gText_Rom_235158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235158) < 0x47
	.space 0x47 - (. - gText_Rom_235158)
	.endif
