	@ data/maps/LilycoveCity_ContestHall/scripts.inc:364 LilycoveCity_ContestHall_Text_OverdidGrooming
	.globl gText_Rom_207E8D
gText_Rom_207E8D: @ 0x08207E8D
	.string "うわーん！\pこの コンテストの ために\nいっしょけんめい けづくろい したら\pやりすぎて あたしの ポケモン\nボサボサに なっちゃった！\pどうしよう……$"
	.if (. - gText_Rom_207E8D) > 0x4d
	.error "gText_Rom_207E8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E8D) < 0x4d
	.space 0x4d - (. - gText_Rom_207E8D)
	.endif
