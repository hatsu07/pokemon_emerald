	@ data/maps/SlateportCity/scripts.inc:1146 SlateportCity_Text_SternMoveAheadWithExploration
	.globl gText_Rom_1DD1E8
gText_Rom_1DD1E8: @ 0x081DD1E8
	.string "クスノキ『……というわけで こんごも\nちょうさは つづけて いきますよ!$"
	.if (. - gText_Rom_1DD1E8) > 0x25
	.error "gText_Rom_1DD1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1E8) < 0x25
	.space 0x25 - (. - gText_Rom_1DD1E8)
	.endif
