	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:236 BattlePyramid_Text_EightItemsRemaining2
	.globl gText_Rom_22DB40
gText_Rom_22DB40: @ 0x0822DB40
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 8つ おちているの{EOS}"
	.if (. - gText_Rom_22DB40) > 0x32
	.error "gText_Rom_22DB40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DB40) < 0x32
	.space 0x32 - (. - gText_Rom_22DB40)
	.endif
