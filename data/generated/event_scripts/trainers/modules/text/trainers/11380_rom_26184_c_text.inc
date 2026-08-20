	@ data/text/trainers.inc:3149 Route131_Text_HermanPostBattle
	.globl gText_Rom_26184C
gText_Rom_26184C: @ 0x0826184C
	.string "うみに あきても\nおよぎ つづけるしか ないのか\pそんな オレは\nねっからの スイマー……{EOS}"
	.if (. - gText_Rom_26184C) > 0x2e
	.error "gText_Rom_26184C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26184C) < 0x2e
	.space 0x2e - (. - gText_Rom_26184C)
	.endif
