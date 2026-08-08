	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:974 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin
	.globl gText_Rom_2207C9
gText_Rom_2207C9: @ 0x082207C9
	.string "じゃあ さっそく\nしょうぶに いどむときの きもちを……"
	.byte EOS
	.if (. - gText_Rom_2207C9) > 0x1d
	.error "gText_Rom_2207C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207C9) < 0x1d
	.space 0x1d - (. - gText_Rom_2207C9)
	.endif
