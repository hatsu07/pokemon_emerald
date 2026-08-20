	@ data/text/trainers.inc:1040 Route111_Text_BryanDefeat (+1 aliases)
	.globl gText_Rom_25C115
gText_Rom_25C115: @ 0x0825C115
	.string "おお そのつよさ\nナゾに みちておる!{EOS}"
	.if (. - gText_Rom_25C115) > 0x14
	.error "gText_Rom_25C115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C115) < 0x14
	.space 0x14 - (. - gText_Rom_25C115)
	.endif
