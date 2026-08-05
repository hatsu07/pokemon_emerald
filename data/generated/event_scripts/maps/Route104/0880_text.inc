	@ data/maps/Route104/scripts.inc:1085 Route104_Text_RegisteredMay
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7E9E
gText_Rom_1E7E9E: @ 0x081E7E9E
	.string "{PLAYER}は ハルカを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_1E7E9E) != 0x18
	.error "gText_Rom_1E7E9E must retain its original byte length"
	.endif
