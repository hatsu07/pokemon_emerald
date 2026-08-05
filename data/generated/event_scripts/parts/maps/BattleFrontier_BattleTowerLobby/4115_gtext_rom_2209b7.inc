	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1009 BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
	.globl gText_Rom_2209B7
gText_Rom_2209B7: @ 0x082209B7
	.string "バトルルームには\nレベル50と オープンレベルと ありますが\lどちらに はいりますか?"
	.byte EOS
	.if (. - gText_Rom_2209B7) > 0x2c
	.error "gText_Rom_2209B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209B7) < 0x2c
	.space 0x2c - (. - gText_Rom_2209B7)
	.endif
