	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:699 BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning
	.globl gText_Rom_22D202
gText_Rom_22D202: @ 0x0822D202
	.string "あなた しってた?\pはやく はしると\nトレーナーが あしおとに きづいて\lしょうぶを しかけて くるの!\pだから トレーナーと\nめを あわせたくない ときは\lトレーナーの ようすを みながら\lゆっくり あるいた ほうが いいのよ!$"
	.if (. - gText_Rom_22D202) > 0x74
	.error "gText_Rom_22D202 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D202) < 0x74
	.space 0x74 - (. - gText_Rom_22D202)
	.endif
