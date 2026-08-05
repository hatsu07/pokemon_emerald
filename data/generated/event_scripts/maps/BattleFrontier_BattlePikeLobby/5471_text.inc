	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:358 BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
	.globl gText_Rom_233931
gText_Rom_233931: @ 0x08233931
	.string "せいせきを レポートに かきましょう……\nしばらく おまちください……"
	.byte EOS
	.if (. - gText_Rom_233931) > 0x24
	.error "gText_Rom_233931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233931) < 0x24
	.space 0x24 - (. - gText_Rom_233931)
	.endif
