	@ data/text/trainers.inc:1010 Route111_Text_BrookeDefeat (+1 aliases)
	.globl gText_Rom_25BFAB
gText_Rom_25BFAB: @ 0x0825BFAB
	.string "つよそう じゃなくて\nつよいのね!{EOS}"
	.if (. - gText_Rom_25BFAB) > 0x12
	.error "gText_Rom_25BFAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFAB) < 0x12
	.space 0x12 - (. - gText_Rom_25BFAB)
	.endif
