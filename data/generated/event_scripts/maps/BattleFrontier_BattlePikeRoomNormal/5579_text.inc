	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:697 BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_234D62
gText_Rom_234D62: @ 0x08234D62
	.string "キルリアの どくどく こうげき!"
	.byte EOS
	.if (. - gText_Rom_234D62) != 0x11
	.error "gText_Rom_234D62 must retain its original byte length"
	.endif
