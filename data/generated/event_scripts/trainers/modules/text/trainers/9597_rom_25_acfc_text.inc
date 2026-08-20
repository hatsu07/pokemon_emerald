	@ data/text/trainers.inc:548 Route108_Text_CoryPostBattle
	.globl gText_Rom_25ACFC
gText_Rom_25ACFC: @ 0x0825ACFC
	.string "おおごえで さけべば\nスッキリ するなあーっ!{EOS}"
	.if (. - gText_Rom_25ACFC) > 0x18
	.error "gText_Rom_25ACFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACFC) < 0x18
	.space 0x18 - (. - gText_Rom_25ACFC)
	.endif
