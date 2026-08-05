	@ data/text/event_ticket_2.inc:35 BirthIsland_Harbor_Text_SailorReturn
	.globl gText_Rom_275DD4
gText_Rom_275DD4: @ 0x08275DD4
	.string "ふしぎな かたちの しまだなあ\nもう ミナモへ かえるか?$"
	.if (. - gText_Rom_275DD4) > 0x1e
	.error "gText_Rom_275DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DD4) < 0x1e
	.space 0x1e - (. - gText_Rom_275DD4)
	.endif
