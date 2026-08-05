	@ data/maps/BattleFrontier_Lounge7/scripts.inc:331 BattleFrontier_Lounge7_Text_RightTutorWelcomeBack
	.globl gText_Rom_239EEC
gText_Rom_239EEC: @ 0x08239EEC
	.string "いひひひっ!\pあたしゃの\nはーど かつ ぷりてぃな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - gText_Rom_239EEC) > 0x2c
	.error "gText_Rom_239EEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239EEC) < 0x2c
	.space 0x2c - (. - gText_Rom_239EEC)
	.endif
