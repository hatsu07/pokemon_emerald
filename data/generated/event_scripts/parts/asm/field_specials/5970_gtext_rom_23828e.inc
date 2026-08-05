	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23828E
gText_Rom_23828E: @ 0x0823828E
	.string "サクサクッと　バトルパレスの\nダブル　バトルホールに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23828E) > 0x55
	.error "gText_Rom_23828E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23828E) < 0x55
	.space 0x55 - (. - gText_Rom_23828E)
	.endif
