	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:540 BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved (+1 aliases)
	.globl gText_Rom_2278A7
gText_Rom_2278A7: @ 0x082278A7
	.string "せいせきを レポートに かきますので\nおまちください{EOS}"
	.if (. - gText_Rom_2278A7) > 0x1b
	.error "gText_Rom_2278A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2278A7) < 0x1b
	.space 0x1b - (. - gText_Rom_2278A7)
	.endif
