	@ data/text/lottery_corner.inc:24 LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_263293
gText_Rom_263293: @ 0x08263293
	.string "くじの ナンバーは {STR_VAR_1}です!\pナンバーが あなたの ポケモンの IDと\nいっちしているか おしらべ いたしますので\lしょうしょう おまちください$"
	.if (. - gText_Rom_263293) != 0x4a
	.error "gText_Rom_263293 must retain its original byte length"
	.endif
