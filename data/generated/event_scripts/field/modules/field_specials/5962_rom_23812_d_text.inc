	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23812D
gText_Rom_23812D: @ 0x0823812D
	.string "サクサクッと　バトルドームの\nダブル　バトルトーナメントに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23812D) > 0x58
	.error "gText_Rom_23812D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23812D) < 0x58
	.space 0x58 - (. - gText_Rom_23812D)
	.endif
