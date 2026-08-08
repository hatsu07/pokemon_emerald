	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:640 BattleFrontier_BattleFactoryPreBattleRoom_Text_MessageFromHeadComeRightNow
	.globl gText_Rom_232912
gText_Rom_232912: @ 0x08232912
	.string "やはは…… おまたせ しました!\pこのしせつの しょちょうで ある\nファクトリーヘッドからの でんごんが\lありますので おつたえ します!\p『やるぞっ! いますぐ こいっ!』\nとの ことです!"
	.byte EOS
	.if (. - gText_Rom_232912) > 0x61
	.error "gText_Rom_232912 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232912) < 0x61
	.space 0x61 - (. - gText_Rom_232912)
	.endif
