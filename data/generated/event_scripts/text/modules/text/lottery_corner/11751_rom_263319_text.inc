	@ data/text/lottery_corner.inc:36 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon
	.globl gText_Rom_263319
gText_Rom_263319: @ 0x08263319
	.string "おめでとう ございます!\pパソコンに あずけている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!$"
	.if (. - gText_Rom_263319) > 0x3e
	.error "gText_Rom_263319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263319) < 0x3e
	.space 0x3e - (. - gText_Rom_263319)
	.endif
