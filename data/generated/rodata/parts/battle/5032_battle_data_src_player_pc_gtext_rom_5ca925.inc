	@ src/player_pc.c:178 sText_NoRoomInBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA925
gText_Rom_5CA925: @ 0x085CA925
	.string "これいじょう\nバッグに はいりません$"
	.if (. - gText_Rom_5CA925) != 0x13
	.error "gText_Rom_5CA925 must retain its original byte length"
	.endif
