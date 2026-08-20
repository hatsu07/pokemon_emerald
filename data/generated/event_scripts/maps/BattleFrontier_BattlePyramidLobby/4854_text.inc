	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:696 BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot
	.globl gText_Rom_22D1C7
gText_Rom_22D1C7: @ 0x0822D1C7
	.string "うらないを しんじるも しんじないも\nあなた しだい……\pみらいは いつでも かえられます……\nどうぞ ごぶじで……{EOS}"
	.if (. - gText_Rom_22D1C7) > 0x3b
	.error "gText_Rom_22D1C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D1C7) < 0x3b
	.space 0x3b - (. - gText_Rom_22D1C7)
	.endif
