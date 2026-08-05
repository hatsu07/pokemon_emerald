	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:345 BattleFrontier_BattlePikeLobby_Text_StepThisWay
	.globl gText_Rom_2338BE
gText_Rom_2338BE: @ 0x082338BE
	.string "では こちらに どうぞ……"
	.byte EOS
	.if (. - gText_Rom_2338BE) > 0xe
	.error "gText_Rom_2338BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2338BE) < 0xe
	.space 0xe - (. - gText_Rom_2338BE)
	.endif
