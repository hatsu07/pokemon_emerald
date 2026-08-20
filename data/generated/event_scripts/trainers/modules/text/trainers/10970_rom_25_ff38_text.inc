	@ data/text/trainers.inc:2540 Route123_Text_FrederickDefeat (+1 aliases)
	.globl gText_Rom_25FF38
gText_Rom_25FF38: @ 0x0825FF38
	.string "つよいこ じゃな\nこづかいを やるか{EOS}"
	.if (. - gText_Rom_25FF38) > 0x13
	.error "gText_Rom_25FF38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF38) < 0x13
	.space 0x13 - (. - gText_Rom_25FF38)
	.endif
