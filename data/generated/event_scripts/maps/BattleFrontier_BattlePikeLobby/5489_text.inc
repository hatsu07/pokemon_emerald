	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:409 BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose
	.globl gText_Rom_233B02
gText_Rom_233B02: @ 0x08233B02
	.string "なんだよ ここ! いみ わかんないよー!\pなんかい チャレンジ しても\nどの みち えらんでも\lトレーナーしか でてこない じゃないかー!"
	.byte EOS
	.if (. - gText_Rom_233B02) > 0x46
	.error "gText_Rom_233B02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233B02) < 0x46
	.space 0x46 - (. - gText_Rom_233B02)
	.endif
