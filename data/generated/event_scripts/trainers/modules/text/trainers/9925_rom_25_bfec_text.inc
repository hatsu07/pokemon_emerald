	@ data/text/trainers.inc:1016 Route111_Text_BrookeRegister
	.globl gText_Rom_25BFEC
gText_Rom_25BFEC: @ 0x0825BFEC
	.string "あなた みたいな つよいひとと\nおともだちに なりたいわ!$"
	.if (. - gText_Rom_25BFEC) > 0x1e
	.error "gText_Rom_25BFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BFEC) < 0x1e
	.space 0x1e - (. - gText_Rom_25BFEC)
	.endif
