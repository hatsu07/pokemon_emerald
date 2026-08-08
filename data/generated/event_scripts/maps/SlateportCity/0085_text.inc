	@ data/maps/SlateportCity/scripts.inc:1134 SlateportCity_Text_CaptainsACelebrity
	.globl gText_Rom_1DD185
gText_Rom_1DD185: @ 0x081DD185
	.string "テレビが しゅざいに くる なんて\nかんちょうも ゆうめいじん ですなあ!$"
	.if (. - gText_Rom_1DD185) > 0x26
	.error "gText_Rom_1DD185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD185) < 0x26
	.space 0x26 - (. - gText_Rom_1DD185)
	.endif
