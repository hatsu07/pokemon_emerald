	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:589 BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
	.globl gText_Rom_22CA67
gText_Rom_22CA67: @ 0x0822CA67
	.string "バトルバッグには\nすべて はいらない ようなので\lバトルバッグと もたせたどうぐを\lせいりして くだされ!$"
	.if (. - gText_Rom_22CA67) > 0x36
	.error "gText_Rom_22CA67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA67) < 0x36
	.space 0x36 - (. - gText_Rom_22CA67)
	.endif
