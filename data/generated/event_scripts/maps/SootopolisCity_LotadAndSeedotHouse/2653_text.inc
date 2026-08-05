	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:113 SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1 (+1 aliases)
	.globl gText_Rom_20FAA3
gText_Rom_20FAA3: @ 0x0820FAA3
	.string "{PLAYER}は\nきずぐすりを もらった!$"
	.if (. - gText_Rom_20FAA3) > 0x11
	.error "gText_Rom_20FAA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAA3) < 0x11
	.space 0x11 - (. - gText_Rom_20FAA3)
	.endif
