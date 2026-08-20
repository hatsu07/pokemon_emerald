	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:620 BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
	.globl gText_Rom_22CBBD
gText_Rom_22CBBD: @ 0x0822CBBD
	.string "ざんねんでしたな……\pおあずかりしていた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!{EOS}"
	.if (. - gText_Rom_22CBBD) > 0x37
	.error "gText_Rom_22CBBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CBBD) < 0x37
	.space 0x37 - (. - gText_Rom_22CBBD)
	.endif
