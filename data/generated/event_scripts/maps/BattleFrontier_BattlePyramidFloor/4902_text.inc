	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:239 BattlePyramid_Text_SevenItemsRemaining2
	.globl gText_Rom_22DB72
gText_Rom_22DB72: @ 0x0822DB72
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 7つ おちているの{EOS}"
	.if (. - gText_Rom_22DB72) > 0x32
	.error "gText_Rom_22DB72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DB72) < 0x32
	.space 0x32 - (. - gText_Rom_22DB72)
	.endif
