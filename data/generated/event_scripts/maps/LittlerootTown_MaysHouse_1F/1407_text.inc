	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:343 RivalsHouse_1F_Text_WentOutToRoute103
	.globl gText_Rom_1F078A
gText_Rom_1F078A: @ 0x081F078A
	.string "あら {RIVAL} だったら\nついさっき 103ばんどうろの ほうへ\lでかけて いったわよ!\pまったく おとうさんに にて\nおうちで じっとして いられないのよね$"
	.if (. - gText_Rom_1F078A) > 0x4e
	.error "gText_Rom_1F078A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F078A) < 0x4e
	.space 0x4e - (. - gText_Rom_1F078A)
	.endif
