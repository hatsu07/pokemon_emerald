	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:260 BattlePyramid_Text_ZeroItemsRemaining2
	.globl gText_Rom_22DCD0
gText_Rom_22DCD0: @ 0x0822DCD0
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nもう おちていないの{EOS}"
	.if (. - gText_Rom_22DCD0) > 0x30
	.error "gText_Rom_22DCD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DCD0) < 0x30
	.space 0x30 - (. - gText_Rom_22DCD0)
	.endif
