	@ data/maps/Route110/scripts.inc:901 Route110_Text_AcroBikesDoNotQualify
	.globl gText_Rom_1E9DD5
gText_Rom_1E9DD5: @ 0x081E9DD5
	.string "この サイクリング ロードでは\nマッハじてんしゃ で はしりぬけた\lレーサーの ぶつかった かいすうと\lかかった タイムを はかって いるんだ!\pダートじてんしゃ だと まがりやすいから\nきろくは はかって あげないよ!$"
	.if (. - gText_Rom_1E9DD5) > 0x6f
	.error "gText_Rom_1E9DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9DD5) < 0x6f
	.space 0x6f - (. - gText_Rom_1E9DD5)
	.endif
