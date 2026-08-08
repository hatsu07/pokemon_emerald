	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1016 BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering
	.globl gText_Rom_2209FD
gText_Rom_2209FD: @ 0x082209FD
	.string "ごあんないする まえに\nレポートを かきますが よろしいですか?"
	.byte EOS
	.if (. - gText_Rom_2209FD) > 0x21
	.error "gText_Rom_2209FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209FD) < 0x21
	.space 0x21 - (. - gText_Rom_2209FD)
	.endif
