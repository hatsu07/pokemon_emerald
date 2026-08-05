	@ data/text/trainers.inc:1697 Route117_Text_IsaacPostRematch
	.globl gText_Rom_25DBF4
gText_Rom_25DBF4: @ 0x0825DBF4
	.string "いい ぐあいに そだってるね!\nミナモシティの ポケモンコンテストに\lでることを おすすめ するよ!$"
	.if (. - gText_Rom_25DBF4) > 0x33
	.error "gText_Rom_25DBF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBF4) < 0x33
	.space 0x33 - (. - gText_Rom_25DBF4)
	.endif
