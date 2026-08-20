	@ data/maps/LittlerootTown/scripts.inc:919 LittlerootTown_Text_WaitPlayer
	.globl gText_Rom_1E437D
gText_Rom_1E437D: @ 0x081E437D
	.string "ママ『まって {PLAYER}!{EOS}"
	.if (. - gText_Rom_1E437D) > 0xb
	.error "gText_Rom_1E437D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E437D) < 0xb
	.space 0xb - (. - gText_Rom_1E437D)
	.endif
