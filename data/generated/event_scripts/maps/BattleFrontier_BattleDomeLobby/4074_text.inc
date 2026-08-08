	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:540 BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved (+1 aliases)
	.globl gText_Rom_22068D
gText_Rom_22068D: @ 0x0822068D
	.string "せいせきを レポートに かきますので\nおまちください"
	.byte EOS
	.if (. - gText_Rom_22068D) > 0x1b
	.error "gText_Rom_22068D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22068D) < 0x1b
	.space 0x1b - (. - gText_Rom_22068D)
	.endif
