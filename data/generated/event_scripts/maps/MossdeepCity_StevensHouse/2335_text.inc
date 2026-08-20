	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:156 MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis
	.globl gText_Rom_20CAAF
gText_Rom_20CAAF: @ 0x0820CAAF
	.string "ダイゴ『トクサネと ルネの あいだには\nかいていどうくつが あるらしい\pほら たしか…… クスノキかんちょうが\nはっけんした という あれだよ{EOS}"
	.if (. - gText_Rom_20CAAF) > 0x48
	.error "gText_Rom_20CAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CAAF) < 0x48
	.space 0x48 - (. - gText_Rom_20CAAF)
	.endif
