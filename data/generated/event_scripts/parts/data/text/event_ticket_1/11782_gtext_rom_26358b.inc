	@ data/text/event_ticket_1.inc:34 SouthernIsland_Interior_Text_Sign
	.globl gText_Rom_26358B
gText_Rom_26358B: @ 0x0826358B
	.string "すべての ゆめは もうひとつの げんじつ\nそれを わすれるべからず……$"
	.if (. - gText_Rom_26358B) > 0x24
	.error "gText_Rom_26358B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26358B) < 0x24
	.space 0x24 - (. - gText_Rom_26358B)
	.endif
