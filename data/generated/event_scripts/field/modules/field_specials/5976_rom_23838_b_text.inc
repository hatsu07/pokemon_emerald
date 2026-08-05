	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23838B
gText_Rom_23838B: @ 0x0823838B
	.string "サクサクッと　バトルピラミッドの\nバトルアドベンチャーに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23838B) > 0x57
	.error "gText_Rom_23838B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23838B) < 0x57
	.space 0x57 - (. - gText_Rom_23838B)
	.endif
