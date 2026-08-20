	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:592 BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem
	.globl gText_Rom_22CA9D
gText_Rom_22CA9D: @ 0x0822CA9D
	.string "ポケモンに\nまだ どうぐを もたせていますぞ!{EOS}"
	.if (. - gText_Rom_22CA9D) > 0x18
	.error "gText_Rom_22CA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA9D) < 0x18
	.space 0x18 - (. - gText_Rom_22CA9D)
	.endif
