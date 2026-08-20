	@ data/text/trainers.inc:611 Route109_Text_RickyDefeated (+1 aliases)
	.globl gText_Rom_25AF38
gText_Rom_25AF38: @ 0x0825AF38
	.string "うーん……{EOS}"
	.if (. - gText_Rom_25AF38) > 0x6
	.error "gText_Rom_25AF38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF38) < 0x6
	.space 0x6 - (. - gText_Rom_25AF38)
	.endif
