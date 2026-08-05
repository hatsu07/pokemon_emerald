	@ data/text/lottery_corner.inc:30 LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon
	.globl gText_Rom_2632DD
gText_Rom_2632DD: @ 0x082632DD
	.string "おめでとう ございます!\pあなたが つれている\n{STR_VAR_1}ちゃんの IDが みごとに\lくじの ナンバーと いっち しました!$"
	.if (. - gText_Rom_2632DD) > 0x3c
	.error "gText_Rom_2632DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2632DD) < 0x3c
	.space 0x3c - (. - gText_Rom_2632DD)
	.endif
