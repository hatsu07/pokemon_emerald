	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:272 BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow
	.globl gText_Rom_238F1D
gText_Rom_238F1D: @ 0x08238F1D
	.string "エニシダ『おおうっ きいたよ!\nバトルタワーでの だいかつやく!\l100にん いじょう かちぬいたって?\pすごすぎるなー!\nぜひ これを きねんに うけとってくれ!"
	.byte EOS
	.if (. - gText_Rom_238F1D) > 0x53
	.error "gText_Rom_238F1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238F1D) < 0x53
	.space 0x53 - (. - gText_Rom_238F1D)
	.endif
