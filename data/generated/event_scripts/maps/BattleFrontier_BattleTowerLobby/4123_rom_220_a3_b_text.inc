	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1009 BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode: @ 0x082209B7
	.string "バトルルームには\nレベル50と オープンレベルと ありますが\lどちらに はいりますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WhichLevelMode) > 0x2c
	.error "BattleFrontier_BattleTowerLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WhichLevelMode) < 0x2c
	.space 0x2c - (. - BattleFrontier_BattleTowerLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1013 BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons
	.globl gText_Rom_2209E3
gText_Rom_2209E3: @ 0x082209E3
	.string "では さんかする ポケモンを\nおえらび ください!"
	.byte EOS
	.if (. - gText_Rom_2209E3) > 0x1a
	.error "gText_Rom_2209E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209E3) < 0x1a
	.space 0x1a - (. - gText_Rom_2209E3)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1016 BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering
	.globl BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering: @ 0x082209FD
	.string "ごあんないする まえに\nレポートを かきますが よろしいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering) > 0x21
	.error "BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering) < 0x21
	.space 0x21 - (. - BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1019 BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
	.globl BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom: @ 0x08220A1E
	.string "それでは {STR_VAR_1} バトルルームに\nごあんない いたします!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom) > 0x1d
	.error "BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1022 BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
	.globl BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch: @ 0x08220A3B
	.string "バトルタワーで\nさいごに おこなった たたかいを\lフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_RecordLastMatch) > 0x2d
	.error "BattleFrontier_BattleTowerLobby_Text_RecordLastMatch may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_RecordLastMatch) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattleTowerLobby_Text_RecordLastMatch)
	.endif
	@ Embedded ROM bytes: file offset 0x220A68, size 0x95
	.byte 0x05, 0x07, 0x34, 0x08, 0x0B, 0x1F, 0xAB, 0xFB, 0x0B, 0x2E, 0x06, 0x44, 0x07, 0x29, 0x00, 0x9F
	.byte 0x59, 0x73, 0x7E, 0x37, 0x00, 0xFD, 0x03, 0x1B, 0x07, 0x00, 0x02, 0x1F, 0x0E, 0x2E, 0xAB, 0xFB
	.byte 0x0B, 0x2E, 0x06, 0x0D, 0x29, 0x00, 0x10, 0x22, 0x16, 0x1A, 0x00, 0x7A, 0x99, 0x79, 0x37, 0x00
	.byte 0xA6, 0xA1, 0x02, 0x06, 0x44, 0xFE, 0x0D, 0x49, 0x13, 0x00, 0x11, 0x37, 0x03, 0x0C, 0x35, 0x29
	.byte 0x02, 0x19, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0xFA, 0xFD, 0x03, 0x1B, 0x07, 0x00, 0x26, 0x03
	.byte 0x02, 0x0C, 0x13, 0x00, 0x08, 0x41, 0x0B, 0x02, 0xFB, 0x1F, 0x10, 0x00, 0x23, 0x10, 0x0E, 0x29
	.byte 0x00, 0x45, 0x03, 0x39, 0x23, 0xFE, 0x0D, 0x49, 0x13, 0x00, 0x11, 0x37, 0x03, 0x00, 0x45, 0x03
	.byte 0x39, 0x16, 0x00, 0x0C, 0x13, 0x08, 0x41, 0x0B, 0x02, 0xAB, 0xFB, 0x15, 0x05, 0x00, 0x60, 0x6F
	.byte 0x8B, 0xFD, 0x02, 0x0B, 0x2E, 0x06, 0x00, 0x0B, 0x0E, 0x29, 0x0A, 0x14, 0x1A, 0x00, 0x44, 0x07
	.byte 0x1F, 0x0E, 0x2E, 0xAB, 0xFB
