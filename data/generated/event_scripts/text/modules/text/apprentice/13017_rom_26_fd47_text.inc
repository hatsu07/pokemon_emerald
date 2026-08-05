	@ data/text/apprentice.inc:442 gText_ApprenticeThanksNoHeldItem13
	.globl gText_Rom_26FD47
gText_Rom_26FD47: @ 0x0826FD47
	.string "ん わかった\nおれも いまは そのほうが たすかるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26FD47) > 0x31
	.error "gText_Rom_26FD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD47) < 0x31
	.space 0x31 - (. - gText_Rom_26FD47)
	.endif
