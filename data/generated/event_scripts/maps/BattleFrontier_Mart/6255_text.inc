	@ data/maps/BattleFrontier_Mart/scripts.inc:50 BattleFrontier_Mart_Text_ProteinMakeNiceGift
	.globl gText_Rom_23B2E2
gText_Rom_23B2E2: @ 0x0823B2E2
	.string "ネエ じいさん\nこれなんか いいんじゃ ないかねえ?\lた… う… タウリ……ソ って いうやつ\pなんだか おいしそうよ"
	.byte EOS
	.if (. - gText_Rom_23B2E2) > 0x3c
	.error "gText_Rom_23B2E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B2E2) < 0x3c
	.space 0x3c - (. - gText_Rom_23B2E2)
	.endif
