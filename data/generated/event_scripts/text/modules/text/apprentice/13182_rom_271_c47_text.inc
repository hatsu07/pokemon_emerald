	@ data/text/apprentice.inc:691 gText_ApprenticeWhichMove3
	.globl gText_Rom_271C47
gText_Rom_271C47: @ 0x08271C47
	.string "ああ {PLAYER}さん!\nあたし あたし ほんと ダメなんです!\pポケモンを いざ そだてようと しても\n……わざ ひとつ まともに きめられなくて\lどうしようも ありません……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます……\lでも あたし……\pおねがいです {PLAYER}さん\nあたしの {STR_VAR_1}の わざ\lきめて いただけませんか?\p{STR_VAR_2}と {STR_VAR_3}か\nどちらかを えらんで くださるだけでも!$"
	.if (. - gText_Rom_271C47) > 0xc3
	.error "gText_Rom_271C47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271C47) < 0xc3
	.space 0xc3 - (. - gText_Rom_271C47)
	.endif
