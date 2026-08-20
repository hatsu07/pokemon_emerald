	@ data/text/trainers.inc:533 Route108_Text_MissyIntro (+1 aliases)
	.globl gText_Rom_25AC75
gText_Rom_25AC75: @ 0x0825AC75
	.string "うみって だいすき!\nおよいでいれば イヤなことも わすれるわ!{EOS}"
	.if (. - gText_Rom_25AC75) > 0x21
	.error "gText_Rom_25AC75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC75) < 0x21
	.space 0x21 - (. - gText_Rom_25AC75)
	.endif
