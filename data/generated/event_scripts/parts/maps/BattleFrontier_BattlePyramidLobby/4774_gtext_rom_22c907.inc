	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:574 BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel
	.globl gText_Rom_22C907
gText_Rom_22C907: @ 0x0822C907
	.string "こちらにある ゆかを ふんで いただくと\nピラミッドの うえの だんへと\lすすむことが できますぞ!\pぶじ ぼうけんが すすむことを\nいのって おりますぞ!$"
	.if (. - gText_Rom_22C907) > 0x4f
	.error "gText_Rom_22C907 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C907) < 0x4f
	.space 0x4f - (. - gText_Rom_22C907)
	.endif
