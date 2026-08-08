	@ data/text/trainers.inc:278 Route104_Text_CindyRegister1
	.globl gText_Rom_25A1AB
gText_Rom_25A1AB: @ 0x0825A1AB
	.string "あら…… また おあい しましたわね\pこんなに ごえんが あるんですもの\nポケナビに とうろく して くださいませ$"
	.if (. - gText_Rom_25A1AB) > 0x3a
	.error "gText_Rom_25A1AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A1AB) < 0x3a
	.space 0x3a - (. - gText_Rom_25A1AB)
	.endif
