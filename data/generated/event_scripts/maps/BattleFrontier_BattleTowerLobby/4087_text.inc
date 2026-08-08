	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:971 BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
	.globl gText_Rom_220781
gText_Rom_220781: @ 0x08220781
	.string "ねえねえ!\pバトルタワーで これから しょうぶだ!\n……ってとき とか\pかったり まけたり したときって\nどんな きもち なのか おしえてよ!"
	.byte EOS
	.if (. - gText_Rom_220781) > 0x48
	.error "gText_Rom_220781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220781) < 0x48
	.space 0x48 - (. - gText_Rom_220781)
	.endif
