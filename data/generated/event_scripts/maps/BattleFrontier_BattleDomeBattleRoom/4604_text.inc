	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1165 BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker
	.globl gText_Rom_229CB7
gText_Rom_229CB7: @ 0x08229CB7
	.string "けっしょうせん!\p{PLAYER}さん VS\nドームスーパースター ヒース\pただいま より はじめます!{EOS}"
	.if (. - gText_Rom_229CB7) > 0x2f
	.error "gText_Rom_229CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229CB7) < 0x2f
	.space 0x2f - (. - gText_Rom_229CB7)
	.endif
