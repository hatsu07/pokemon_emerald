	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_2380D4
gText_Rom_2380D4: @ 0x082380D4
	.string "サクサクッと　バトルドームの\nシングル　バトルトーナメントに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_2380D4) > 0x59
	.error "gText_Rom_2380D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2380D4) < 0x59
	.space 0x59 - (. - gText_Rom_2380D4)
	.endif
