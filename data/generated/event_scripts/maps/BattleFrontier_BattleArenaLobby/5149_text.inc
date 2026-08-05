	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:472 BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22FBC2
gText_Rom_22FBC2: @ 0x0822FBC2
	.string "おつかれさまでした!\pせいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FBC2) != 0x27
	.error "gText_Rom_22FBC2 must retain its original byte length"
	.endif
