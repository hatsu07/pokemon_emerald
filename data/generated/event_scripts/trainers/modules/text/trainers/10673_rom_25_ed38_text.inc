	@ data/text/trainers.inc:2099 Route119_Text_DaytonDefeat (+1 aliases)
	.globl gText_Rom_25ED38
gText_Rom_25ED38: @ 0x0825ED38
	.string "やるなー ホッホッホ!{EOS}"
	.if (. - gText_Rom_25ED38) > 0xc
	.error "gText_Rom_25ED38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ED38) < 0xc
	.space 0xc - (. - gText_Rom_25ED38)
	.endif
