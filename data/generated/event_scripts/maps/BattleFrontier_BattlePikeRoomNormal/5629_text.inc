	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:801 BattleFrontier_BattlePikeRoomNormal_Text_IWontForget
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_235097
gText_Rom_235097: @ 0x08235097
	.string "…… …… あんた……\nいっしょう わすれない からね………"
	.byte EOS
	.if (. - gText_Rom_235097) != 0x1f
	.error "gText_Rom_235097 must retain its original byte length"
	.endif
