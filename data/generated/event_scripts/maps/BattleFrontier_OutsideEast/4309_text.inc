	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:294 BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy
	.globl gText_Rom_222FAB
gText_Rom_222FAB: @ 0x08222FAB
	.string "むすめよ!\nがんばって かちぬいて こい!\lおまえは ママ そっくり だから つよいぞ!$"
	.if (. - gText_Rom_222FAB) > 0x2d
	.error "gText_Rom_222FAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222FAB) < 0x2d
	.space 0x2d - (. - gText_Rom_222FAB)
	.endif
