	@ data/text/trainers.inc:2093 Route119_Text_FabianPostBattle
	.globl gText_Rom_25ECF1
gText_Rom_25ECF1: @ 0x0825ECF1
	.string "デケデケデケデケ\nにどとーホ おれにーヒ かまうなよーホ$"
	.if (. - gText_Rom_25ECF1) > 0x1d
	.error "gText_Rom_25ECF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECF1) < 0x1d
	.space 0x1d - (. - gText_Rom_25ECF1)
	.endif
