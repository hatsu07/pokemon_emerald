	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:269 BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow
	.globl gText_Rom_238ED3
gText_Rom_238ED3: @ 0x08238ED3
	.string "エニシダ『おっ きいたよ!\nバトルタワーでの かつやく!\l50にん いじょう かちぬいたって?\pすごいなあ きねんに\nこれを うけとって くれよ!"
	.byte EOS
	.if (. - gText_Rom_238ED3) > 0x4a
	.error "gText_Rom_238ED3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238ED3) < 0x4a
	.space 0x4a - (. - gText_Rom_238ED3)
	.endif
