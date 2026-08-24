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
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:823 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons: @ 0x0823519F
	.string "ようこそ いらっしゃい ました……\pうふふ……\nほんとうに ラッキーな おかた……\pさいごに このへやを えらばれた\nおきゃくさまは ポケモンを すべて\lかいふくして さしあげましょう……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons) > 0x5f
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons) < 0x5f
	.space 0x5f - (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:830 BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster
	.globl BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster
BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster: @ 0x082351FE
	.string "では わたくしどもの あるじを\nよんで まいり ますね……"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster) > 0x1e
	.error "BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:833 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons
	.globl BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons: @ 0x0823521C
	.string "おお きみは ツイてるぞ!\pいまの わしは きげんが いいからな!\nきみの ポケモンを 2ひき\lかいふくして あげよう!"
	.byte EOS
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons) > 0x3d
	.error "BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons) < 0x3d
	.space 0x3d - (. - BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons)
	.endif
	@ Embedded ROM bytes: file offset 0x235259, size 0x60
	.byte 0x02, 0x64, 0x52, 0x23, 0x08, 0x04, 0xA5, 0x52, 0x23, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x6E
	.byte 0x52, 0x23, 0x08, 0x00, 0x00, 0x28, 0x10, 0x00, 0x4F, 0x01, 0x00, 0xA2, 0x52, 0x23, 0x08, 0x51
	.byte 0x00, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x03
	.byte 0x00, 0x25, 0xE7, 0x00, 0x69, 0x0F, 0x00, 0xB9, 0x52, 0x23, 0x08, 0x09, 0x04, 0x68, 0x6B, 0x39
	.byte 0x1A, 0x22, 0xFF, 0x05, 0x00, 0x06, 0x00, 0x27, 0x02, 0x08, 0x08, 0xFE, 0x04, 0x40, 0x00, 0x00
	.byte 0xAF, 0x52, 0x23, 0x08, 0x00, 0x00, 0x16, 0x04, 0x40, 0x01, 0x00, 0x5B, 0xFF, 0x00, 0x02, 0x02
