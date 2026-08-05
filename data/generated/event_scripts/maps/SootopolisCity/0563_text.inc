	@ data/maps/SootopolisCity/scripts.inc:1483 SootopolisCity_Text_AfterAllOurScheming
	.globl gText_Rom_1E33BA
gText_Rom_1E33BA: @ 0x081E33BA
	.string "マツブサ『ちょうこだい ポケモンは\nグラードンと カイオーガ だけじゃ\lなかったと いうのか……\pわれわれは ひっしに なって\nあれこれ うごきまわって きたが\lあの ポケモンの ひとはたらきで\lぜんぶ もとどおり というわけか……\pふ…… ふははは……$"
	.if (. - gText_Rom_1E33BA) > 0x80
	.error "gText_Rom_1E33BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E33BA) < 0x80
	.space 0x80 - (. - gText_Rom_1E33BA)
	.endif
