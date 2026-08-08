	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:263 BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere
	.globl gText_Rom_238E89
gText_Rom_238E89: @ 0x08238E89
	.string "いやー われながら\nトレーナーを みるめが さえてるなー\lきみを つれてきて ほんと よかった!\lほく ほく"
	.byte EOS
	.if (. - gText_Rom_238E89) > 0x37
	.error "gText_Rom_238E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238E89) < 0x37
	.space 0x37 - (. - gText_Rom_238E89)
	.endif
