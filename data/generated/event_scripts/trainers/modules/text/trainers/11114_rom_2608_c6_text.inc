	@ data/text/trainers.inc:2753 Route125_Text_ErnestRegister
	.globl gText_Rom_2608C6
gText_Rom_2608C6: @ 0x082608C6
	.string "ポケナビ とうろく して くれたら\nいいことを おしえて やるよ!{EOS}"
	.if (. - gText_Rom_2608C6) > 0x22
	.error "gText_Rom_2608C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2608C6) < 0x22
	.space 0x22 - (. - gText_Rom_2608C6)
	.endif
