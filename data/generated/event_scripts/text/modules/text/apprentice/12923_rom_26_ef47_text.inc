	@ data/text/apprentice.inc:301 gText_ApprenticeWhatHeldItem4
	.globl gText_Rom_26EF47
gText_Rom_26EF47: @ 0x0826EF47
	.string "あら {PLAYER}{KUN}\nちょっと ききたい ことが あるのよ!\pわたし ポケモンは きめて もらったけど\nどの どうぐを もたせるか までは\lきめて もらってない じゃない?\pどうせ なら さいごまで\nあなたが きめて くれない?\lねえ なにが いいかしら?\l{STR_VAR_1}に もたせたいの!"
	.byte EOS
	.if (. - gText_Rom_26EF47) > 0x8a
	.error "gText_Rom_26EF47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EF47) < 0x8a
	.space 0x8a - (. - gText_Rom_26EF47)
	.endif
