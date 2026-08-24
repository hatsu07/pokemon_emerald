	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:697 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_234D62
gText_Rom_234D62: @ 0x08234D62
	.string "キルリアの どくどく こうげき!"
	.byte EOS
	.if (. - gText_Rom_234D62) != 0x11
	.error "gText_Rom_234D62 must retain its original byte length"
	.endif
	.globl gText_Rom_234D6C
	.set gText_Rom_234D6C, gText_Rom_234D62 + 0xa
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:700 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
	.globl gText_Rom_234D73
gText_Rom_234D73: @ 0x08234D73
	.string "キルリアの さいみんじゅつ!"
	.byte EOS
	.if (. - gText_Rom_234D73) > 0xf
	.error "gText_Rom_234D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D73) < 0xf
	.space 0xf - (. - gText_Rom_234D73)
	.endif
