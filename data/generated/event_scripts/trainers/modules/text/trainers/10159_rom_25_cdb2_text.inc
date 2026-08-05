	@ data/text/trainers.inc:1355 Route114_Text_BernieRematchIntro (+1 aliases)
	.globl gText_Rom_25CDB2
gText_Rom_25CDB2: @ 0x0825CDB2
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい するように なったか!?$"
	.if (. - gText_Rom_25CDB2) > 0x2e
	.error "gText_Rom_25CDB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDB2) < 0x2e
	.space 0x2e - (. - gText_Rom_25CDB2)
	.endif
