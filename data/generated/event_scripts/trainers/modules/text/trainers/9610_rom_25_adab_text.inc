	@ data/text/trainers.inc:566 Route108_Text_CarolinaDefeated (+1 aliases)
	.globl gText_Rom_25ADAB
gText_Rom_25ADAB: @ 0x0825ADAB
	.string "あら かわいくないわね!{EOS}"
	.if (. - gText_Rom_25ADAB) > 0xd
	.error "gText_Rom_25ADAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ADAB) < 0xd
	.space 0xd - (. - gText_Rom_25ADAB)
	.endif
