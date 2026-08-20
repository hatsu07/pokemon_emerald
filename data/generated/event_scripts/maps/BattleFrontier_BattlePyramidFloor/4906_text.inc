	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:245 BattlePyramid_Text_FiveItemsRemaining2
	.globl gText_Rom_22DBD6
gText_Rom_22DBD6: @ 0x0822DBD6
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 5つ おちているの{EOS}"
	.if (. - gText_Rom_22DBD6) > 0x32
	.error "gText_Rom_22DBD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DBD6) < 0x32
	.space 0x32 - (. - gText_Rom_22DBD6)
	.endif
