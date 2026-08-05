	@ data/text/lottery_corner.inc:20 LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
	.globl gText_Rom_26325B
gText_Rom_26325B: @ 0x0826325B
	.string "では くじを ひいて ください\n…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}$"
	.if (. - gText_Rom_26325B) > 0x38
	.error "gText_Rom_26325B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26325B) < 0x38
	.space 0x38 - (. - gText_Rom_26325B)
	.endif
