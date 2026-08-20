	@ data/maps/Route104/scripts.inc:1019 Route104_Text_ImNotATrainer
	.globl gText_Rom_1E7BCB
gText_Rom_1E7BCB: @ 0x081E7BCB
	.string "わたし トレーナーじゃ ないわよ\pでも トレーナーどうし しせんが あうのは\nしょうぶしようって サイン なのよね!\pもし たたかいたく なかったら\nしせんを あわさなければ いいのよね!{EOS}"
	.if (. - gText_Rom_1E7BCB) > 0x5f
	.error "gText_Rom_1E7BCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7BCB) < 0x5f
	.space 0x5f - (. - gText_Rom_1E7BCB)
	.endif
