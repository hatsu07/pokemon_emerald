	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:96 RustboroCity_Flat1_2F_Text_OhShesLaughing
	.globl gText_Rom_203A10
gText_Rom_203A10: @ 0x08203A10
	.string "{STR_VAR_1}\n{STR_VAR_1}\pわらってる わらってる!\nなんだか うれしいなあ{EOS}"
	.if (. - gText_Rom_203A10) > 0x1f
	.error "gText_Rom_203A10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A10) < 0x1f
	.space 0x1f - (. - gText_Rom_203A10)
	.endif
