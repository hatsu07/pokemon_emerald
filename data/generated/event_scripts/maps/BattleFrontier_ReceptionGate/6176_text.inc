	@ data/maps/BattleFrontier_ReceptionGate/scripts.inc:306 BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier
	.globl gText_Rom_23A5ED
gText_Rom_23A5ED: @ 0x0823A5ED
	.string "ポケモンバトルの さいぜんせん！\nバトルフロンティアへ ようこそ！"
	.byte EOS
	.if (. - gText_Rom_23A5ED) > 0x22
	.error "gText_Rom_23A5ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A5ED) < 0x22
	.space 0x22 - (. - gText_Rom_23A5ED)
	.endif
