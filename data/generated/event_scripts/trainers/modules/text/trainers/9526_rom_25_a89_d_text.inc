	@ data/text/trainers.inc:443 Route107_Text_TonyRegister
	.globl gText_Rom_25A89D
gText_Rom_25A89D: @ 0x0825A89D
	.string "ショックを うけたオレを\nきみが わすれない ために……!{EOS}"
	.if (. - gText_Rom_25A89D) > 0x1e
	.error "gText_Rom_25A89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A89D) < 0x1e
	.space 0x1e - (. - gText_Rom_25A89D)
	.endif
