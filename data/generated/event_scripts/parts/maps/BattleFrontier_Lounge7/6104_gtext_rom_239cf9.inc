	@ data/maps/BattleFrontier_Lounge7/scripts.inc:307 BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack
	.globl gText_Rom_239CF9
gText_Rom_239CF9: @ 0x08239CF9
	.string "ぶはははっ!\pあたしゃの\nすぺしゃる かつ きゅーとな わざを\lおそわりに きたんかー!?"
	.byte EOS
	.if (. - gText_Rom_239CF9) > 0x2e
	.error "gText_Rom_239CF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239CF9) < 0x2e
	.space 0x2e - (. - gText_Rom_239CF9)
	.endif
