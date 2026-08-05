	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_238185
gText_Rom_238185: @ 0x08238185
	.string "サクサクッと　バトルファクトリーの\nバトルトレード　シングルに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_238185) > 0x5a
	.error "gText_Rom_238185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238185) < 0x5a
	.space 0x5a - (. - gText_Rom_238185)
	.endif
