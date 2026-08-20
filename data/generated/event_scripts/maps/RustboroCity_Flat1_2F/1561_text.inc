	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:102 RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll (+1 aliases)
	.globl gText_Rom_203A9D
gText_Rom_203A9D: @ 0x08203A9D
	.string "{STR_VAR_1}\n{STR_VAR_1}\pうーん わらわないなあ\nこのこ クール なのかな{EOS}"
	.if (. - gText_Rom_203A9D) > 0x1f
	.error "gText_Rom_203A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A9D) < 0x1f
	.space 0x1f - (. - gText_Rom_203A9D)
	.endif
