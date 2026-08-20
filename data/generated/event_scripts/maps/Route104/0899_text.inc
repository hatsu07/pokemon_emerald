	@ data/maps/Route104/scripts.inc:1132 Route104_Text_RegisteredBrendan
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E805F
gText_Rom_1E805F: @ 0x081E805F
	.string "{PLAYER}は ユウキを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1E805F) != 0x18
	.error "gText_Rom_1E805F must retain its original byte length"
	.endif
