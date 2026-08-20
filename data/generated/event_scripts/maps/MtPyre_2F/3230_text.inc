	@ data/maps/MtPyre_2F/scripts.inc:74 MtPyre_2F_Text_LukeDefeat (+1 aliases)
	.globl gText_Rom_2163F7
gText_Rom_2163F7: @ 0x082163F7
	.string "テル『あっちゃー{EOS}"
	.if (. - gText_Rom_2163F7) > 0x9
	.error "gText_Rom_2163F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2163F7) < 0x9
	.space 0x9 - (. - gText_Rom_2163F7)
	.endif
