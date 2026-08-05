	@ data/text/apprentice.inc:292 gText_ApprenticeThanksNoHeldItem3
	.globl gText_Rom_26EE7D
gText_Rom_26EE7D: @ 0x0826EE7D
	.string "わかりました……\nどうぐに たよるなって ことですね?\lがんばって みます!\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EE7D) > 0x34
	.error "gText_Rom_26EE7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE7D) < 0x34
	.space 0x34 - (. - gText_Rom_26EE7D)
	.endif
