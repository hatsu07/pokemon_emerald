	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:580 BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid
	.globl gText_Rom_22C9CE
gText_Rom_22C9CE: @ 0x0822C9CE
	.string "おかえりなさいませ!\pみごとに バトルピラミッドを\nせいは されましたな!{EOS}"
	.if (. - gText_Rom_22C9CE) > 0x26
	.error "gText_Rom_22C9CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C9CE) < 0x26
	.space 0x26 - (. - gText_Rom_22C9CE)
	.endif
