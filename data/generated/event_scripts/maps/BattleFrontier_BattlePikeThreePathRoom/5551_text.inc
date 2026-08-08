	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:358 BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent
	.globl gText_Rom_23433C
gText_Rom_23433C: @ 0x0823433C
	.string "おきゃくさま……\pこのさき たいへんに\nおそろしい できごとが おきゃくさまを\lまちうけている でしょう……\pかくごして おいて ください……"
	.byte EOS
	.if (. - gText_Rom_23433C) > 0x48
	.error "gText_Rom_23433C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23433C) < 0x48
	.space 0x48 - (. - gText_Rom_23433C)
	.endif
