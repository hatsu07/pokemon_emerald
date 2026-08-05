	@ data/maps/BattleFrontier_Lounge5/scripts.inc:44 BattleFrontier_Lounge5_Text_NatureGirlGreeting
	.globl gText_Rom_239014
gText_Rom_239014: @ 0x08239014
	.string "へへ! あたち ポケモンの\nきもち わかるの!\pね! ポケモン みちて! みちて!"
	.byte EOS
	.if (. - gText_Rom_239014) > 0x2a
	.error "gText_Rom_239014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239014) < 0x2a
	.space 0x2a - (. - gText_Rom_239014)
	.endif
