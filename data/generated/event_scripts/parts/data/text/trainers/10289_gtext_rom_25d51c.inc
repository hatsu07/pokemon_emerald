	@ data/text/trainers.inc:1538 Route115_Text_HelenePostBattle
	.globl gText_Rom_25D51C
gText_Rom_25D51C: @ 0x0825D51C
	.string "あたしより つよい ひとなんて\nめったに あわないのに……\pわかった!\nあなた ジムリーダー でしょ!$"
	.if (. - gText_Rom_25D51C) > 0x34
	.error "gText_Rom_25D51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D51C) < 0x34
	.space 0x34 - (. - gText_Rom_25D51C)
	.endif
