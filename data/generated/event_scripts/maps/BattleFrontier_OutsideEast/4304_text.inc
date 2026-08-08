	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:288 BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_222F59
gText_Rom_222F59: @ 0x08222F59
	.string "じてんしゃも はやいけど\nポケモン だって じしんあるわ!\lめにも とまらぬ はやさで かっちゃうわよ!$"
	.if (. - gText_Rom_222F59) != 0x35
	.error "gText_Rom_222F59 must retain its original byte length"
	.endif
